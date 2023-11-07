#include <stdio.h>
void Add(int x, int y);
void Sub(int x, int y);
void Mul(int x, int y);
void Div(float x, float y);
int main(void) {
	int a;
	int b;

	printf("First num : ");
	scanf("%d", &a);
	printf("Second num : ");
	scanf("%d", &b);
	Add(a, b);
	Sub(a, b);
	Mul(a, b);
	Div(a, b);
	
	return 0;

}
void Add(int x, int y) {
	printf("Add : %d\n", x + y);
	return;
}	
void Sub(int x, int y) {
	printf("Sub : %d\n", x - y);
	return;
}
void Mul(int x, int y) {
	printf("Mul : %d\n", x * y);
	return;
}
void Div(float x, float y) {
	if (y != 0)
		printf("Div : %f\n", x / y);
	else
		printf("Div : error!\n");
	
	return;
}