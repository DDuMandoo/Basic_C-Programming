#include <stdio.h>

int main() {
	char V;
	int t;
	int m;
	int fee;


	printf("�������� : ");
	scanf("%c", &V);
	printf("�ð� : ");
	scanf("%d", &t);
	printf("�� : ");
	scanf("%d", &m);

	if (t == 0 && m < 10) {
		fee = 0;
		printf("������� : %d��\n", fee);
	}
	else {
		if (V == 'c') {
			fee = (int)((60 * t + m) / 10) * 10 * 200;
			printf("������� : %d��\n", fee);
		}
		else if (V == 'b') {
			fee = (int)((60 * t + m) / 10) * 10 * 300;
			printf("������� : %d��\n", fee);
		}
		else if (V == 't') {
			fee = (int)((60 * t + m) / 10) * 10 * 500;
			printf("������� : %d��\n", fee);
		}

		return 0;
	}
}