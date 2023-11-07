#include <stdio.h>

int main(void) {
	int x[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int y[3][4] = { {1, 4,7,10},{2,5,8,11},{3,6,9,12} };
	int i, j, k;
	int r[3][4];
	for (k = 0; k < 4; k++) {


		for (i = 0; i < 3; i++) {
			int sum = 0;
			for (j = 0; j < 3; j++) {
				sum = sum + x[i][j] * y[j][k];
			}
			r[i][k] = sum;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d ", r[i][j]);
		}
		printf("\n");
	}

	return 0;
}