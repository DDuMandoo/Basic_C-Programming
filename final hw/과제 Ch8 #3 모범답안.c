#include<stdio.h>

void add_element(int value, int set[], int* cp);
void delete_element(int value, int set[], int* cp);
int has_element(int value, int set[], const int* cp);

int main(void) {
	int value;
	char s;
	int c = 0;
	int* cp = &c;
	int set[5000] = { 0 };
	while (1) {
		printf("Enter commands : a 5 adds 5 to the set, d 5 deletes 5 from set.\n");
		s = getchar();
		if (s == 'q') {
			break;
		}
		scanf("%d", &value);

		while (getchar() != '\n');

		if (s == 'a') {
			if (has_element(value, set, cp) != -1) {
				add_element(value, set, cp);
			}
			else {
				for (int i = 0; i < *cp; i++) {
					printf("%d ", set[i]);
				}
				printf("\n");
				continue;
			}
		}
		else if (s == 'd') {
			if (has_element(value, set, cp) == -1) {
				delete_element(value, set, cp);
			}
			else {
				for (int i = 0; i < *cp; i++) {
					printf("%d ", set[i]);
				}
				printf("\n");
				continue;
			}
		}
		else {
			printf("wrong command. try again.\n");
		}
	}
	return 0;
}

void add_element(int value, int set[], int* cp) {

	*cp = *cp + 1;
	set[*cp - 1] = value;
	for (int i = 0; i < *cp; i++) {
		printf("%d ", set[i]);
	}
	printf("\n");
}

void delete_element(int value, int set[], int* cp) {
	for (int j = 0; j < *cp; j++) {
		if (value == set[j]) {
			set[j] = set[j + 1];
			value = set[j];
			continue;
		}
	}
	*cp = *cp - 1;
	for (int i = 0; i < *cp; i++) {
		printf("%d ", set[i]);
	}
	printf("\n");
}

int has_element(int value, int set[], const int* cp) {
	for (int i = 0; i < *cp; i++) {
		if (value == set[i]) {
			return -1;
			break;
		}
	}
	return 1;
}