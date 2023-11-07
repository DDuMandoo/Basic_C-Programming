#include <stdio.h>

int main(void) {
	int a;
	int sum = 0;

	printf("Enter your numbers: <EOF> to stop\n");
	while (scanf("%d", &a) != EOF) {
		sum += a;
		printf("Total: %d\n", sum);
	}
	return 0;
}