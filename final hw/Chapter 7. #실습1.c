#include <stdio.h>

int main() {
	int arr[] = { 0,1,2 };
	int i;

	for (i = 0; i <= 2; i++) {
		int a;

		printf("number? ");
		scanf("%d", &a);

		arr[i] = arr[i] + a;

	}
	printf("arr[0] = %d, arr[1] = %d, arr[2] = %d\n", arr[0], arr[1], arr[2]);

	return 0;
}