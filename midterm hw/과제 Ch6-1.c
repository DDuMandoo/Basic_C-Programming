#include <stdio.h>

int main(void) {
	int a;

	printf("Enter number of rows : ");
	scanf("%d", &a);

	for (int b = 1; b <= a; b++) {
		for (int c = 1; c <= a - b; c++) {
			printf(" ");
		}
		for (int c = 1; c <= 2 * b - 1; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}