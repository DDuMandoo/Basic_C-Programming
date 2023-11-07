#include <stdio.h>
#include <math.h>
const float bound = 1.0e-8;

int main(void) {
	float a, b, c;
	float D;
	float root1, root2;

	printf("Enter a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);

	if (a == 0 && b == 0) {
		printf("No root exists.\n");
	}
	else {
		if (a == 0) {
			root1 = -c / b;
			printf("root = %.4f.\n", root1);
		}
		else {
			D = b * b - 4 * a * c;

			if (fabs(D) <= bound){
				root1 = -b /(2 * a);
				printf("root = %.4f.\n", root1);
			}
			else if (D > 0) {
				D = sqrt(D);
				root1 = (-b + D) / (2 * a);
				root2 = (-b - D) / (2 * a);
				printf("root1 = %.4f and root2 = %.4f.\n",root1, root2);
			}
			else {
				printf("No root exists.\n");
			}
		}
	}
	return 0;

}