#include <stdio.h>

int main() {
	int count = 1;
	int sum = 0;

	while (count<100) {
		sum = sum + count;
		count = count + 2;
	}
	printf("1���� 100���� Ȧ���� ���� %d�Դϴ�.\n", sum);
	return 0;
}