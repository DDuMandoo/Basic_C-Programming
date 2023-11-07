#include <stdio.h>
#include <string.h>

int insertString(char* str1, char* str2, int idx);
int main(void) {
	printf("This program inserts a string to a specific position you want.\n\n");

	char origin[80];
	char str[80];
	int n;

	printf("Original string : ");
	gets(origin);
	printf("Enter a string to insert : ");
	gets(str);
	printf("Where to do you wnat to insert? : ");
	scanf("%d", &n);

	printf("\n");
	insertString(origin, str, n);

	return 0;
}

int insertString(char* str1, char* str2, int idx) {
	if (strlen(str1) < idx) {
		return 0;
	}
	else {
		char str[80];
		str[idx] = '\0';
		strncpy(str, str1, idx);
		strcat(str, str2);
		strcat(str, str1 + idx);


		fputs("Result : ", stdout);
		fputs(str, stdout);
		fputs("\n", stdout);

		return 1;
	}

}