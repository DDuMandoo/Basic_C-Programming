#include <stdio.h>
void Celsius(float x);
void Fahrenheit(float x);
int main(void) {
	float c;
	float f;

	printf("\n");
	printf("섭씨 온도를 입력하시오 : ");
	scanf("%f", &c);
	Celsius(c);
	printf("화씨 온도를 입력하시오 : ");
	scanf("%f", &f);
	Fahrenheit(f);

	return 0;
}
void Celsius(float x) {
	float y;
	y = ((float) 180 / 100) * x + 32;
	printf("화씨 온도는 %.2f 입니다\n\n", y);
	return;
}
void Fahrenheit(float x) {
	float y;
	y = ((float)100 / 180) * (x - 32);
	printf("섭씨 온도는 %.2f 입니다\n", y);
	return;
}