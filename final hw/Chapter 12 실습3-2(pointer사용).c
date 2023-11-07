#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
}FRACTION;

void getFr(FRACTION* pFr);
void multFr(FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes);
void printFr(FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes);

int main() {
	FRACTION fr1;
	FRACTION fr2;
	FRACTION res;

	getFr(&fr1);
	getFr(&fr2);
	multFr(&fr1, &fr2, &res);
	printFr(&fr1, &fr2, &res);

	return 0;
}

void getFr(FRACTION* pFr){
	printf("Write a fraction in the form of x/y: ");
	scanf("%d/%d", &pFr->numerator, &pFr->denominator);
	return;
}

void multFr(FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes) {
	pRes->numerator = pFr1->numerator * (*pFr2).numerator;
	pRes->denominator = pFr1->denominator * pFr2->denominator;
	return;
}
void printFr(FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes) {
	printf("\nThe result of %d/%d * %d/%d is %d/%d\n", pFr1->numerator, pFr1->denominator, (*pFr2).numerator, pFr2->denominator,pRes->numerator, pRes->denominator);
	return;
}