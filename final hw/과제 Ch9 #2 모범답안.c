#include <stdio.h>
#include <stdlib.h>

int** transpose(int** matrix, int m, int n);
void printMatrix(int** matrix, int m, int n);

int main(void)
{
	int row, col;
	int** mat;
	printf("Number of Rows : ");
	scanf("%d", &row);
	printf("Number of Cols : ");
	scanf("%d", &col);

	mat = (int**)malloc(sizeof(int*) * row);
	for (int i = 0; i < row; i++)
		mat[i] = (int*)malloc(sizeof(int) * col);

	printf("seed锅龋 20201728肺 积己等 Matrix\n");

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			mat[i][j] = rand() % 100 + 1;
	printMatrix(mat, row, col);

	printf("Transpose等 Matrix\n");
	printMatrix(transpose(mat, row, col), col, row);

	for (int i = 0; i < row; i++)
		free(mat[i]);
	free(mat);

	return 0;
}

int** transpose(int** matrix, int m, int n)
{
	int** reMatrix = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		reMatrix[i] = (int*)malloc(sizeof(int) * m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			reMatrix[i][j] = matrix[j][i];
	return reMatrix;
}

void printMatrix(int** matrix, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%2d ", matrix[i][j]);
		printf("\n");
	}
}