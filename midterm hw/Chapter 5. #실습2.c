#include <stdio.h>
int main() {
	int a = 5;
	int b = -3;
	printf(" % d <  %d is  %d\n", a, b, a < b);
	printf(" % d >  %d is  %d\n", a, b, a > b);
	printf(" % d <= %d is  %d\n", a, b, a <= b);
	printf(" % d >= %d is  %d\n", a, b, a >= b);
	printf(" % d == %d is  %d\n", a, b, a == b);
	printf(" % d != %d is  %d\n", a, b, a != b);
	printf("\"a�� % d �̰� b��  %d\" is %d\n", a, -b, a < -b);
	printf("\"a�� % d �̰� b�� %d\" is %d\n", a, b, a > b);

	return 0;
}