#include <stdio.h>

void delete_char(char* arr, int n, char c);
int main(void) {
	char Arr[] = { 'G','O','O','D','M','O','R','N','I','N','G','\0' };
	char c;
	int i = 0;
	int j = 0;

	printf("���� �� : ");
	for (i; Arr[i] != '\0'; i++) {
		printf("%c", Arr[i]);
	}
	printf("\n");

	i = i + 1;
	printf("������ ���� : ");
	scanf("%c", &c);
	delete_char(Arr, i, c);

	printf("���� �� : ");
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