#include <stdio.h>

int main() {
	int count = 1;
	int sum = 0;

	while (count<100) {
		sum = sum + count;
		count = count + 2;
	}
	printf("1부터 100까지 홀수의 합은 %d입니다.\n", sum);
	return 0;
}