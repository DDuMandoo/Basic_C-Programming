#include<stdio.h>

int main() {
	char arr[51];
	int i;
	int a = 0;

	printf("Input : ");
	scanf("%[^\n]s", arr);

	while (arr[a]) {
		a++;
	}
	printf("Result : ");
	for (i = a - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	printf("\n");

	return 0;
}