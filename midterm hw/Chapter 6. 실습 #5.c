#include <stdio.h>

int main() {
	int total = 0;
	int val = 0;

	do {
		printf("Input number(Quit : 0) : ");
		scanf("%d", &val);
		total = total + val;

	} while (val != 0);
	printf("Total : %d\n", total);
	return 0;
}