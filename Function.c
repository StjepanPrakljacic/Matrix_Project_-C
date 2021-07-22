#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

Matrix* Matrix_Alcoation() {
	Matrix* M = (Matrix*)malloc(sizeof(Matrix));
	printf("Unesite broj redaka matrice: ");
	scanf("%d", &M->row);
	printf("Unesite broj stupaca matrice: ");
	scanf("%d", &M->column);
	M->data = (int**)malloc(M->row * sizeof(int*));
	for (int i = 0; i < M->row; i++) {
		M->data[i] = (int*)malloc(M->column * sizeof(int));

	}
	return M;
}
	void Matrix_delete(Matrix* M) {
		for (int i = 0; i < M->row; i++)
			free(M->data[i]);
		free(M->data);
}

	void Matrix_Fill(Matrix* M) {
		int i, j;
		srand((unsigned)time(NULL));
		for (i = 0; i < M->row; i++) {
			for (j = 0; j < M->column; j++) {
				M->data[i][j] = 1 + rand() % (100 - 1) + 1;
			}
		}
	}
	void Matrix_print(Matrix* M) {
		for (int x = 0; x < M->row; x++) {
			printf("%s", "\n");
			for (int y = 0; y < M->column; y++) {
				printf("%d\t", M->data[x][y]);
			}
		}
	}
