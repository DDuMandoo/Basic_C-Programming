#include <stdio.h>

int main() {
	int limit;

	printf("\nPlease enter a number between 1 and 9: ");
	scanf("%d", &limit);

	for (int lineCtrl = 1; lineCtrl <= limit; lineCtrl++) {
		for (int numCtrl = 1; numCtrl <= lineCtrl; numCtrl++) {
			printf("%d", numCtrl);
		}
		printf("\n");
	}
	return 0;
}