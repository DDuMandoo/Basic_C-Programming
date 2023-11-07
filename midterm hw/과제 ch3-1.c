#include <stdio.h>
int main(void)
{
	float i;
	float j;
	printf("원의 반지름을 입력하세요.\n반지름 : ");
	scanf("%f", &i);
	j = 3.14 * i * i;
	printf("원의 넓이는 %0.2f\n", j);
	return 0;

}