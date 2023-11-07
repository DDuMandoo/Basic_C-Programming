#include <stdio.h>
#define SIZE 5

void multiply(int* pary, int size);

int main() {
	
	int ary[SIZE];
	int* plast;
	int* pwalk;

	plast = ary + SIZE - 1;
	for (pwalk = ary; pwalk <= plast; pwalk++) {
		printf("Please enter an integer: ");
		scanf("%d", pwalk);
	}

	multiply(ary, SIZE);

	printf("Douled value is: \n");
	for (pwalk = ary; pwalk <= plast; pwalk++) {
		printf("%3d", *pwalk);

	}
	printf("\n");
	return 0;
}

void multiply(int* pary, int size) {
	int* pwalk;
	int* plast;

	plast = pary + size - 1;
	for (pwalk = pary; pwalk <= plast; pwalk++) {
		*pwalk = *pwalk * 2;
		
	}
	return;
}