#include <stdio.h>
int main(void)
{
	float f;
	float c;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &f);
	c = ((float)100 / 180) * (f - 32);
	printf("Fahrenheit temperature is: %0.1f\n", f);
	printf("Celsius temperature is: %0.1f\n", c);

	return 0;
}