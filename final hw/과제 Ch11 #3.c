#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** arr);
int main(void) {
	int n;
	char* arr[30] = { 0 };
	char temp[80];
	int i;

	printf("Number of strings : ");
	scanf("%d", &n);
	getchar();

	for (i = 0; i < n; i++) {
		printf("Input the string : ");
		gets(temp);

		arr[i] = (char*)malloc(strlen(temp) + 1);
		if (NULL == arr[i]) {
			printf("malloc failed\n");
			return(-1);
		}
		strcpy(arr[i], temp);
	}

	printf("Read complete!!!\n");

	print_str(arr);

	for (int j = 0; j < n; j++) {
		free(arr[j]);
	}

	return 0;
}

void print_str(char** arr) {
	printf("\nYour strings are :\n");
	while (*arr != NULL) {
		printf("%s\n", *arr);
		arr++;
	}
	return;
}
