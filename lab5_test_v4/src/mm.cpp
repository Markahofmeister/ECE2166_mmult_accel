#include "hls_stream.h"
#include "ap_int.h"

typedef short DTYPE;
const int M = 256;
const int PORT_WIDTH_B = 64;
const int PORT_WIDTH_b = PORT_WIDTH_B * 8;
const int DTYPE_WIDTH_b = sizeof(DTYPE) * 8;
typedef ap_int<PORT_WIDTH_b> block_t;
const int DTYPE_PER_PORT = PORT_WIDTH_B / sizeof(DTYPE);

void changeARate(hls::stream<block_t> &AStreamWide, hls::stream<DTYPE> &AStream, int N) {
	for(int ib = 0; ib < N/M; ib++) {
		for(int jb = 0; jb < N/M; jb++) {
			for(int kb = 0; kb < N/M; kb++) {
				for(int k = 0; k < M; k++) {
					for(int ii = 0; ii < M/DTYPE_PER_PORT; ii++) {
						block_t A_temp = AStreamWide.read();
						for(int i = 0; i < DTYPE_PER_PORT; i++) {
#pragma HLS pipeline II=1
							ap_int<DTYPE_WIDTH_b> val_a = A_temp(DTYPE_WIDTH_b * (i + 1) - 1, DTYPE_WIDTH_b * i);
							DTYPE a = (DTYPE) val_a;
							AStream.write(a);
						}
					}
				}
			}
		}
	}
}

void readA(block_t *A_p, hls::stream<block_t> &AStreamWide, int N) {
	for(int ib = 0; ib < N/M; ib++) {
		for(int jb = 0; jb < N/M; jb++) {
			for(int kb = 0; kb < N/M; kb++) {
				for(int k = 0; k < M; k++) {
					for(int ii = 0; ii < M/DTYPE_PER_PORT; ii++) {
#pragma HLS pipeline II=1
						AStreamWide.write(A_p[((kb*M+k)*N+ib*M)/DTYPE_PER_PORT+ii]);
					}
				}
			}
		}
	}
}

void readB(block_t *B_p, hls::stream<block_t> &BStream, int N) {
	for(int ib = 0; ib < N/M; ib++) {
		for(int jb = 0; jb < N/M; jb++) {
			for(int kb = 0; kb < N/M; kb++) {
				for(int k = 0; k < M; k++) {
					for(int jj = 0; jj < M/DTYPE_PER_PORT; jj++) {
#pragma HLS pipeline II=1
						BStream.write(B_p[((kb*M+k)*N+jb*M)/DTYPE_PER_PORT+jj]);
					}
				}
			}
		}
	}
}

void comp(hls::stream<DTYPE> &AStream, hls::stream<block_t> &BStream, hls::stream<block_t> &ABStream, int N) {
	DTYPE AB_block[M][M];
#pragma HLS array_partition variable=AB_block complete dim=2

	ib_loop: for(int ib = 0; ib < N/M; ib++) {
		jb_loop: for(int jb = 0; jb < N/M; jb++) {
			init_i_loop: for(int i =0; i < M; i++) {
#pragma	HLS pipeline II=1
				init_j_loop: for(int j = 0; j < M; j++) {
					AB_block[i][j] = 0;
				}
			}

			kb_loop: for(int kb = 0; kb < N/M; kb++) {
				k_loop: for(int k = 0; k < M; k++) {
					DTYPE Bj[M];
#pragma HLS array_partition variable=Bj complete
					readB_j_loop: for(int jj = 0; jj < M/DTYPE_PER_PORT; jj++) {
#pragma HLS pipeline II=1
						block_t B_temp = BStream.read();
						for (int j = 0; j < DTYPE_PER_PORT; j++) {
#pragma HLS unroll
							ap_int<DTYPE_WIDTH_b> val_b = B_temp(DTYPE_WIDTH_b * (j + 1)-1, DTYPE_WIDTH_b * j);
							// finish?
							DTYPE b = (DTYPE) val_b;
							Bj[jj*DTYPE_PER_PORT +j] = b;


						}
					}
					i_loop: for(int i = 0; i < M; i++) {
#pragma HLS pipeline II=1
						DTYPE Ai = AStream.read();
						j_loop: for(int j = 0; j < M; j++) {
#pragma HLS unroll
							AB_block[i][j] += Ai * Bj[j];
						}
					}
				}
			}

			writeAB_i_loop: for(int i = 0; i < M; i++) {
				writeAB_j_loop: for(int jj = 0; jj < M/DTYPE_PER_PORT; jj++) {
#pragma HLS pipeline II=1
					block_t AB_temp;
					for (int j = 0; j < DTYPE_PER_PORT; j++) {
#pragma HLS unroll
						AB_temp(DTYPE_WIDTH_b*(j+1)-1,DTYPE_WIDTH_b*j) = AB_block[i][jj*DTYPE_PER_PORT+j];
					}
					ABStream.write(AB_temp);
				}
			}
		}
	}
}


void writeAB(hls::stream<block_t> &ABStream, block_t *AB, int N) {
	for(int ib = 0; ib < N/M; ib++) {
		for(int jb = 0; jb < N/M; jb++) {
			for(int i = 0; i < M; i++) {
				for(int jj = 0; jj < M/DTYPE_PER_PORT; jj++) {
#pragma HLS pipeline II=1
					AB[((ib*M+i)*N+jb*M)/DTYPE_PER_PORT+jj] = ABStream.read();
				}
			}
		}
	}
}

extern "C" {
void mm(block_t *A_p,  block_t *B_p, block_t *AB_p, int N)
{


#pragma HLS INTERFACE m_axi port = A_p offset = slave bundle = gmem0
#pragma HLS INTERFACE m_axi port = B_p offset = slave bundle = gmem1
#pragma HLS INTERFACE m_axi port = AB_p offset = slave bundle = gmem2
#pragma HLS INTERFACE s_axilite port = A_p bundle = control
#pragma HLS INTERFACE s_axilite port = B_p bundle = control
#pragma HLS INTERFACE s_axilite port = AB_p bundle = control
#pragma HLS INTERFACE s_axilite port = N bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

	hls::stream<block_t> AStreamWide("AStreamWide");
	hls::stream<DTYPE> AStream("AStream");
	hls::stream<block_t> BStream("BStream");
	hls::stream<block_t> ABStream("ABStream");

#pragma HLS DATAFLOW

	readA(A_p, AStreamWide, N);
	changeARate(AStreamWide, AStream, N);
	readB(B_p, BStream, N);
	comp(AStream, BStream, ABStream, N);
	writeAB(ABStream, AB_p, N);

}

}
