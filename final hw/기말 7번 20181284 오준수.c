#include <stdio.h>
#include <stdlib.h>
#define NUMS 20

int** convertArray(int* fromArray, int elements, int toRow, int toCol);
int main(void) {
	int numArray[NUMS] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int row, col;

	printf("Enter number of rows and cols(ex:3,4) : ");
	scanf("%d,%d", &row, &col);

	convertArray(numArray, sizeof(numArray) / sizeof(numArray[0]), row, col);
	return 0;
}

int** convertArray(int* fromArray, int elements, int toRow, int toCol) {
	int* arr = (int*)malloc(sizeof(int) * toRow); // �࿡ ���� �޸� �ο�
	int i;

	if (toRow * toCol != NUMS) {
		printf("Cannot convert array with %d elements into %dx%d array\n", NUMS, toRow, toCol);
	}
	else {
		for (i = 0; i < toCol; i++) {
			arr[i] = (int*)malloc(sizeof(int) * toRow); // �� ���� ���� �޸� �ο�
		}
	}
	for (i = 0; i < toRow; i++) {
		arr[i] = 1 + i * toCol;
	}//�� �迭�� ���� �����Ϸ��� ����
	for (i = 0; i < toRol; i++) {
		for (int j=0; j<toCol)
		*arr[i][j]
	}
}