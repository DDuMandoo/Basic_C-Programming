#include <stdio.h>

int main() {
	long num;
	int digit;

	printf("Enter a number and I'll print it backward: ");
	scanf("%d", &num);

	while (num > 0) {
		digit = num % 10;
		printf("%d", digit);
		num = num / 10;
	}
	printf("\nHave a good day.\n");
	return 0;
}