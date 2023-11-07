#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 30

typedef struct {
	char name[20];
	char* meaning;
}WORD;

void main() {
	WORD* arr[MAX]; //WORD�� �ּҸ� ����Ű�� array[i]��
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
		}     // array[i]�� NULL üũ
		strcpy(arr[i]->name, temp);
		printf("Enter meaning of the word.\n");
		gets(temp);
		arr[i]->meaning = (char*)malloc(sizeof(char) * (strlen(temp) + 1)); //strlen�� /0�� �A ���̸� ��Ÿ��
		if (arr[i]->meaning == NULL) {
			exit(1);
		}  //array[i]�� NULLüũ
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