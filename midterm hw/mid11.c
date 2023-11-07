#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int e, f, g, h, i, j, k;
	int sum;

	printf("Enter ISBN code(ex:1-11-111111-1) : ");
	scanf("%d-%d-%d-%d", &a, &b, &c, &d);

	a = a * 10;
	e = b % 10;
	b = b / 10;
	f = c % 100000/10000;
	g = c % 10000 / 1000;
	h = c % 1000 / 100;
	i = c % 100 / 10;
	j = c % 10;
	c = c / 10000;
	
	b *= 9;
	c *= 8;
	d *= 7;
	e *= 6;
	f *= 5;
	g *= 4;
	h *= 3;
	i *= 2;
	j *= 1;
	sum = a + b + c + d + e + f + g + h + i + j;
	if (sum % 11 == 0) {
		printf("Valid ISBN code\n");
	}
	else {
		printf("InValid ISBN code\n");
	}

	return 0;
}