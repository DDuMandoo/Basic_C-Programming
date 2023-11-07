#include <stdio.h>

void func(int a, int b, int* sum, int* diff, int* prod, int* quot);

int main(void) {
	int a, b, sum, diff, prod, quot;
	printf("Enter two integers : ");
	scanf("%d%d", &a, &b);
	func(a, b, &sum, &diff, &prod, &quot);
	printf("%d + %d = %d\n", a, b, sum);
	printf("%d - %d = %d\n", a, b, diff);
	printf("%d * %d = %d\n", a, b, prod);
	printf("%d / %d = %d\n", a, b, quot);

	return 0;
}

void func(int a, int b, int* sum, int* diff, int* prod, int* quot) {
	*sum = a + b;
	*diff = a - b;
	*prod = a * b;
	*quot = a / b;
}