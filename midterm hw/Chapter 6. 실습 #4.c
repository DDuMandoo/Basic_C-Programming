#include <stdio.h>

int main() {
	int i;
	int j;

	for (i = 2; i <= 4; i = i + 1) {
		for (j = 1; j < 10; j = j + 1) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}