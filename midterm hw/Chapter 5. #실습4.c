#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	int max;
	int min;

	printf("Enter the number 1 : ");
	scanf("%d", &a);
	printf("Enter the number 2 : ");
	scanf("%d", &b);
	printf("Enter the number 3 : ");
	scanf("%d", &c);


	if (a >= b) {
		if (a >= c) {
			max = a;
			if (c <= b) {
				min = c;
			}
			else {
				min = b;
			}
		}
		else{
			max = c;
			min = b;
		}
	}
	else {
		if (b > c) {
			max = b;
			if (a <= c) {
				min = a;
			}
			else {
				min = c;
			}
		}
		else {
			max = c;
			min = a;
		}
	}

	printf("The max number is %d\n", max);
	printf("The min number is %d\n", min);

	return 0;
}