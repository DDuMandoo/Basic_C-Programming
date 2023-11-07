#include <stdio.h>

int main() {

	int a;
	printf("Enter the score(0-100):");
	scanf("%d", &a);

	if (a >= 91) {
		printf("The grade is A\n");
	}
	else if (a >= 81) {
		printf("The grade is B\n");
	}
	else if (a >= 71) {
		printf("The grade is C\n");
	}
	else if (a >= 61) {
		printf("The grade is D\n");
	}
	else {
		printf("The grade is F\n");
	}

	return 0;
}