// Mark Hofmeister

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>		// For runtime calculation
#include <string.h>		// For memset() function


// Bool to print calculated matrices
const int print = 0; 

 
int main (int argc, char *argv[]) {

	int matSize = atoi(argv[1]);
	int M = matSize;
	int N = matSize;
	int P = matSize;

	// Dynamically allocate enough space to
	// represent 2 input matrices
	int *mat1 = malloc(M*N*sizeof(int));
	int *mat2 = malloc(N*P*sizeof(int));

	// Set input matrices = 0
	memset(mat1, 0, M * N * sizeof(int));
	memset(mat2, 0, N * P * sizeof(int));

	int iterator = 0;

	if(print) printf("Matrix 1: \n [ ");
	
	// Fill matrix 1 elements with ascending ints
	for(int row = 0; row < M; row++) {
		for(int col = 0; col < N; col++) {

			mat1[row * N + col] = iterator;

			iterator++;

			if(print) printf("%d ", mat1[row * N + col]);

		}			
		if(row == M - 1 && print) {
			printf("]\n");
		}
		else if (print) {
			printf("\n");
		}
	}

	iterator = 0;

	// Fill matrix 2 elements with ascending ints
	if(print) printf("\nMatrix 2: \n [ ");

	for(int row = 0; row < N; row++) {
		for(int col = 0; col < P; col++) {

			mat2[row * P + col] = iterator;

			iterator++;

			if(print) printf("%d ", mat1[row * P + col]);

		}		
		if(row == N - 1 && print) {
			printf("]\n");
		}
		else if (print) {
			printf("\n");
		}
	}

	// Allocate space for resulting matrix + set to 0
	int *resultMatrix = malloc(M*P*sizeof(int));

	memset(resultMatrix, 0, M * P * sizeof(int));

	// Beginning time of execution	
	double start = omp_get_wtime();		

	// Do matrix multiply
	for (int i = 0; i < M; ++i) {
			for (int k = 0; k < N; ++k) {
				for (int j = 0; j < P; ++j) {
	
				resultMatrix[i * P + j] += mat1[i * N + k] * mat2[k * P + j];
			
			}
		}
		
	}

	// Time taken to calculate matrices
	double timeTaken = omp_get_wtime() - start;

	printf("Matrix multiply calculation completed in %lf seconds.\n", timeTaken);

	// Print resulting matrix
	if (print) {
		printf("[ ");
		for(int row = 0; row < M; row++) {
			for(int col = 0; col < P; col++) {
				printf("%d ", resultMatrix[row * P + col]);
			}		
			printf("\n");
		}
		printf(" ]\n");
	}

	// Free that memory
	free(mat1);
	free(mat2);
	free(resultMatrix);

  return 0;


}




