#include <stdio.h>

void Celsius();
float GetCelsius();
float CelsiustoFahrenheit(float x);
void PrintCelsius(float x);
void Fahrenheit();
float GetFahrenheit();
float FahrenheittoCelsius(float x);
void PrintFahrenheit(float x);

int main(void) {
	float a;
	float b;

	printf("\n");
	Celsius();
	Fahrenheit();

	return 0;
}
void Celsius() {
	float x;
	x = GetCelsius();
	x = CelsiustoFahrenheit(x);
	PrintCelsius(x);
	return;
}
float GetCelsius() {
	float x;
	printf("섭씨 온도를 입력하시오 : ");
	scanf("%f", &x);
	return x;
}
float CelsiustoFahrenheit(float x) {
	float y;
	y = ((float)180 / 100) * x + 32;
	
	return y;
}
void PrintCelsius(float x) {
	printf("화씨 온도는 %.2f 입니다\n\n", x);
	
	return;
}
void Fahrenheit() {
	float x;
	x = GetFahrenheit();
	x = FahrenheittoCelsius(x);
	PrintFahrenheit(x);
	
	return;
}
float GetFahrenheit() {
	float x;
	printf("화씨 온도를 입력하시오 : ");
	scanf("%f", &x);
	
	return x;
}
float FahrenheittoCelsius(float x) {
	float y;
	y = ((float)100 / 180) * (x - 32);
	return y;
}
void PrintFahrenheit(float x) {
	printf("섭씨 온도는 %.2f 입니다\n", x);
	return;
}