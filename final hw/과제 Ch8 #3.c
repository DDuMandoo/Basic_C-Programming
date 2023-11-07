#include <stdio.h>

void add_element(int value, int set[], int* cp);
void delete_element(int value, int set[], int* cp);
int has_element(int value, int set[], const int* cp);

int main(void) {
	int a;
	char c;
	int n = 0;
	int arr[128] = { 0 };
	int* aa = &a;
	char* cc = &c;

	while (1) {
		printf("Enter commands : a 5 adds 5 to the set, d 5 deletes 5 from set.\n");
		scanf("%c", cc);

		if (*cc == 'q') {
			break;
		}
		if (*cc == 'a') {
			scanf("%d", aa);
			while (getchar() != '\n');
			add_element(*aa, arr, &n);
		}
		else if (*cc == 'd') {
			scanf("%d", aa);
			while (getchar() != '\n');
			delete_element(*aa, arr, &n);
		}
		else {
			scanf("%d", aa);
			while (getchar() != '\n');
			printf("wrong command. try again.\n");
		}
	}

	return 0;
}

void add_element(int value, int set[], int* cp) {
	if (has_element(value, set, cp)) {
		for (int i = 0; i < *cp; i++) {
			printf("%d ", set[i]);
		}
		printf("\n");
		return;
	}
	else {
		set[*cp] = value;
		for (int i = 0; i <= *cp; i++) {
			printf("%d ", set[i]);
		}
		*cp = *cp + 1;
	}
	printf("\n");

	return;
}

void delete_element(int value, int set[], int* cp){
	int i, j;
	for (i = 0; i < *cp; ++i)
	{
		if (set[i] == value)
		{
			for (--(*cp); i < *cp; ++i)
				set[i] = set[i + 1];
		}
	}
	for (int j = 0; j < *cp; ++j) {
		printf("%d ", set[j]);
	}
	printf("\n");
}

int has_element(int value, int set[], const int* cp) {
	for (int i = 0; i <= *cp; i++) {
		if (set[i] == value) {
			return 1;
		}
		else {
		}
	}
	return 0;
}