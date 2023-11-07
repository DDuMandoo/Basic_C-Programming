#include <stdio.h>

void GCD(int x, int y);

int main(void) {
	int a;
	int b;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	GCD(a, b);

	return 0;
}

void GCD(int x, int y) {
	int r;
	int r1;

	if (x >= y) {
		r = x % y;
		while (r != 0) {
			r1 = y % r;
			y = r;
			r = r1;
		}
		printf("GCD is %d\n", y);
		
	}
	else {
		r = y % x;
		while (r != 0) {
			r1 = x % r;
			x = r;
			r = r1;
		}
		printf("GCD is %d\n", x);
	}
	return ;
}