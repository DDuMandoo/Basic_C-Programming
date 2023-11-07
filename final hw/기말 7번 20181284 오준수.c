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
	int* arr = (int*)malloc(sizeof(int) * toRow); // 행에 대한 메모리 부여
	int i;

	if (toRow * toCol != NUMS) {
		printf("Cannot convert array with %d elements into %dx%d array\n", NUMS, toRow, toCol);
	}
	else {
		for (i = 0; i < toCol; i++) {
			arr[i] = (int*)malloc(sizeof(int) * toRow); // 각 열에 대한 메모리 부여
		}
	}
	for (i = 0; i < toRow; i++) {
		arr[i] = 1 + i * toCol;
	}//각 배열에 원소 대입하려고 했음
	for (i = 0; i < toRol; i++) {
		for (int j=0; j<toCol)
		*arr[i][j]
	}
}