#include <stdio.h>

int main() {
	int a;
	int* p;
	int** q;
	int*** r;

	p = &a;
	q = &p;
	r = &q;

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("The number is : %d\n", a);

	printf("Enter a number: ");
	scanf("%d", p);
	printf("The number is : %d\n", a);

	printf("Enter a number: ");
	scanf("%d", *q);
	printf("The number is : %d\n", a);

	printf("Enter a number: ");
	scanf("%d", **r);
	printf("The number is : %d\n", a);

	return 0;
}