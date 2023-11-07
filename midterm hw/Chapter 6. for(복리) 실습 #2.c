#include <stdio.h>

int main() {
	float pVal;
	float fVal;
	float rate;
	int year;
	int looper;

	printf("Enter value of investment: ");
	scanf("%f", &pVal);

	printf("Enter rate: ");
	scanf("%f", &rate);

	printf("Enter years: ");
	scanf("%d", &year);

	for (fVal = pVal, looper = 1; looper <= year; looper++) {
		fVal = fVal * (1 + rate / 100.0);
		printf("year : %d and Value : %.2f\n", looper, fVal);

	}
	return 0;
}