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
	printf("���� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &x);
	return x;
}
float CelsiustoFahrenheit(float x) {
	float y;
	y = ((float)180 / 100) * x + 32;
	
	return y;
}
void PrintCelsius(float x) {
	printf("ȭ�� �µ��� %.2f �Դϴ�\n\n", x);
	
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
	printf("ȭ�� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &x);
	
	return x;
}
float FahrenheittoCelsius(float x) {
	float y;
	y = ((float)100 / 180) * (x - 32);
	return y;
}
void PrintFahrenheit(float x) {
	printf("���� �µ��� %.2f �Դϴ�\n", x);
	return;
}