#include <stdio.h>

int main(void) {
	int a, b;
	int* j = &a;
	int* k = &b;

	printf("Enter two integers : ");
	scanf("%d %d", j, k);

	printf("%d + %d = %d\n", *j, *k, *j + *k);
	printf("%d - %d = %d\n", *j, *k, *j - *k);
	printf("%d * %d = %d\n", *j, *k, *j * *k);
	printf("%d / %d = %d\n", *j, *k, *j / *k);

	return 0;
}