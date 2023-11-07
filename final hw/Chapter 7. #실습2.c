#include <stdio.h>

int main() {
	int arr[3] = { 0 };
	int i;
	int a, b, c;
	int total;


	printf("시간을 입력하시오 : ");
	scanf("%d", &a);
	printf("분을 입력하시오 : ");
	scanf("%d", &b);
	printf("초를 입력하시오 : ");
	scanf("%d", &c);

	arr[0] = arr[0] + a;
	arr[1] = arr[1] + b;
	arr[2] = arr[2] + c;
	total = arr[0] * 3600 + arr[1] * 60 + arr[2];

	printf("%d시간 %d분 %d초는 %d초 입니다.\n", arr[0], arr[1], arr[2], total);

	return 0;
}