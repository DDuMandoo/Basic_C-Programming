#include <stdio.h>
#include <stdlib.h>

int** transpose(int** matrix, int m, int n);
void printMatrix(int** matrix, int m, int n);

int main(void) {
	srand(20181284);
	int R, C;

	printf("Number of Rows : ");
	scanf("%d", &R);
	printf("Number of Cols : ");
	scanf("%d", &C);

	int** matrix = (int**)malloc(sizeof(int*) * R);
	if (NULL == matrix) {
		return(-1);
	}

	for (int i = 0; i < R; i++)
	{
		matrix[i] = (int*)malloc(sizeof(int) * C);
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			matrix[i][j] = rand() % 100 + 1;
		}
	}
	printf("seed锅龋 20181284肺 积己等 Matrix\n");
	printMatrix(matrix, R, C);
	transpose(matrix, R, C);

	return 0;
}

int** transpose(int** matrix, int m, int n) {
	int** Tmatrix = (int**)malloc(sizeof(int*) * n);
	if (NULL == matrix) {
		return(-1);
	}


	for (int i = 0; i < n; i++)
	{
		Tmatrix[i] = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			Tmatrix[i][j] = matrix[j][i];
		}
	}
	printf("Transpose等 Matrix\n");
	printMatrix(Tmatrix, n, m);
}

void printMatrix(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
	return;
}