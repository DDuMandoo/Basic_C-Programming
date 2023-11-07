#include <stdio.h>
int main(void)
{
	int i;
	float j;
	printf("Enter an angle in degrees: ");
	scanf("%d", &i);
	j = i / 57.295779;
	printf("%d degrees is %f radians\n", i, j);
	
	return 0;
}