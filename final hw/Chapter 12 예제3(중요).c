#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 30

typedef struct {
	char name[20];
	char* meaning;
}WORD;

void main() {
	WORD* arr[MAX]; //WORD의 주소를 가리키는 array[i]들
	char temp[200];
	int i = 0; int j;

	while (1) {
		printf("Enter a word.\n");
		gets(temp);
		if (strcmp(temp, "quit") == 0) {
			break;
		}
		arr[i] = (WORD*)malloc(sizeof(WORD));
		if (arr[i] == NULL) {
			exit(1);
		}     // array[i]의 NULL 체크
		strcpy(arr[i]->name, temp);
		printf("Enter meaning of the word.\n");
		gets(temp);
		arr[i]->meaning = (char*)malloc(sizeof(char) * (strlen(temp) + 1)); //strlen은 /0을 뺸 길이를 나타냄
		if (arr[i]->meaning == NULL) {
			exit(1);
		}  //array[i]의 NULL체크
		strcpy(arr[i]->meaning, temp);
		i++;
		printf("\n");
	}

	printf("\nThe dictionary has\n");
	for (j = 0; j < i; j++) {
		puts(arr[j]->name);
		puts(arr[j]->meaning);
	}

	for (j = 0; j < i; j++) {
		free(arr[j]->meaning);
		arr[j]->meaning = NULL;
	}

	for (j = 0; j < i; j++) {
		free(arr[j]);
		arr[j] = NULL;
	}
	return;
}