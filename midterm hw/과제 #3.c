#include <stdio.h>
void Celsius(float x);
void Fahrenheit(float x);
int main(void) {
	float c;
	float f;

	printf("\n");
	printf("���� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &c);
	Celsius(c);
	printf("ȭ�� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &f);
	Fahrenheit(f);

	return 0;
}
void Celsius(float x) {
	float y;
	y = ((float) 180 / 100) * x + 32;
	printf("ȭ�� �µ��� %.2f �Դϴ�\n\n", y);
	return;
}
void Fahrenheit(float x) {
	float y;
	y = ((float)100 / 180) * (x - 32);
	printf("���� �µ��� %.2f �Դϴ�\n", y);
	return;
}