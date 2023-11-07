#include <stdio.h>

int main() {

	int a;

	printf("Enter the score(0-100):");
	scanf("%d", &a);

	switch (a / 10) {
	case 10:
		printf("The grade is A\n");
		break;
	case 9:
		printf("The grade is A\n");
		break;
	case 8:
		printf("The grade is B\n");
		break;
	case 7:
		printf("The grade is C\n");
		break;
	case 6:
		printf("The grade is D\n");
		break;
	default:
		printf("The grade is F\n");
		break;
	}
	return 0;
}