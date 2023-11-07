#include <stdio.h>
#define ROW 5
#define COL 6

void rowAverage(int arr[ROW][COL], int x);
int main(void) {
	int a[ROW][COL];
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			a[i][j] = (3 * (i + 1) - 3) + (j + 1);
		}
	}

	rowAverage(a,5);
	return 0;
}


void rowAverage(int arr[ROW][COL],int x) {
	int i, j;
	float avg;
	for (i = 0; i < 5; i++) {
		int sum = 0;
		for (j = 0; j < 6; j++) {
			sum = sum + arr[i][j];
			avg = (float)sum / COL;
			printf("%3d", arr[i][j]);
		}
		printf("  |%6.2f\n", avg);
	}
	return;
}