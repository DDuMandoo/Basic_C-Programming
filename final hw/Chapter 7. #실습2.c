#include <stdio.h>

int main() {
	int arr[3] = { 0 };
	int i;
	int a, b, c;
	int total;


	printf("�ð��� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &b);
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &c);

	arr[0] = arr[0] + a;
	arr[1] = arr[1] + b;
	arr[2] = arr[2] + c;
	total = arr[0] * 3600 + arr[1] * 60 + arr[2];

	printf("%d�ð� %d�� %d�ʴ� %d�� �Դϴ�.\n", arr[0], arr[1], arr[2], total);

	return 0;
}