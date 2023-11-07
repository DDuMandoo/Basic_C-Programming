#include <stdio.h>

void delete_char(char* arr, int n, char c);
int main(void) {
	char Arr[] = { 'G','O','O','D','M','O','R','N','I','N','G','\0' };
	char c;
	int i = 0;
	int j = 0;

	printf("삭제 전 : ");
	for (i; Arr[i] != '\0'; i++) {
		printf("%c", Arr[i]);
	}
	printf("\n");

	i = i + 1;
	printf("삭제할 문자 : ");
	scanf("%c", &c);
	delete_char(Arr, i, c);

	printf("삭제 후 : ");
	for (j; Arr[j] != '\0'; j++) {
		printf("%c", Arr[j]);
	}
	printf("\n");

	return 0;
}

void delete_char(char* arr, int n, char c) {
	int i = 0;
	int j;

	for (i; i <= n; ) {
		if (arr[i] == c) {
			for (j = i; j < n; j++) {
				arr[j] = arr[j + 1];
			}
		}
		else {
			i = i + 1;
		}
	}
	return;
}