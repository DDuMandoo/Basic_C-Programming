#include <stdio.h>

#define MAX_SIZE 10

int main() {
	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pWalk;
	int* pEnd;

	printf("Array forward : ");
	for (pWalk = ary, pEnd = ary + MAX_SIZE; pWalk < pEnd; pWalk++) {
		printf("%3d", *pWalk);
	}
	printf("\n");

	printf("Array backward: ");
	for (pWalk = pEnd - 1; pWalk >= ary; pWalk--) { //주소값끼리의 연산(메모리 상에서) 
		printf("%3d", *pWalk);
	}
	printf("\n");

	return 0;
}