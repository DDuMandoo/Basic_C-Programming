#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
}FRACTION;

FRACTION getFr(void);
FRACTION multFr(FRACTION fr1, FRACTION fr2);
void printFr(FRACTION fr1, FRACTION fr2, FRACTION result);

int main() {
	FRACTION fr1;
	FRACTION fr2;
	FRACTION result;

	fr1 = getFr();
	fr2 = getFr();
	result = multFr(fr1, fr2);
	printFr(fr1, fr2, result);
	return 0;
}

FRACTION getFr(void) {
	FRACTION fr;

	printf("Write a fraction in the form of x/y: ");
	scanf("%d/%d", &fr.numerator, &fr.denominator);
	return fr;
}

FRACTION multFr(FRACTION fr1, FRACTION fr2) {
	FRACTION result;

	result.numerator = fr1.numerator * fr2.numerator;
	result.denominator = fr1.denominator * fr2.denominator;
	return result;
}

void printFr(FRACTION fr1, FRACTION fr2, FRACTION result) {
	printf("\nThe result of %d/%d * %d/%d is %d/%d\n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, result.numerator, result.denominator);
	return;
}
