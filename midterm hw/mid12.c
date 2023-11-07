#include <stdio.h>

int GCD(int x, int y);
char mutually_prime(int x, int y);

int main(void) {
	int a, b;
	char c;

	printf("Enter two numbers.\n");
	scanf("%d %d", &a, &b);

	c = mutually_prime(a, b);

	if (c == 'y') {
		printf("They are mutually prime.\n");
	}
	else {
		printf("They are not mutually prime.\n");
	}


}

int GCD(int x, int y) {
	int r;
	int r1;

	if (x > y) {
		r = x % y;
		while (r != 0) {
			r1 = y % r;
			y = r;
			r = r1;
		}
		return y;
	}
	else {
		r = y % x;
		while (r != 0) {
			r1 = x % r;
			x = r;
			r = r1;
		}
	}
	return x;
}

char mutually_prime(int x, int y) {
	if (GCD(x, y) == 1) {
		return 'y';
	}
	else {
		return 'n';
	}
}