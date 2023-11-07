#include <stdio.h>

int main() {
	char V;
	int t;
	int m;
	int fee;


	printf("차량종류 : ");
	scanf("%c", &V);
	printf("시간 : ");
	scanf("%d", &t);
	printf("분 : ");
	scanf("%d", &m);

	if (t == 0 && m < 10) {
		fee = 0;
		printf("주차요금 : %d원\n", fee);
	}
	else {
		if (V == 'c') {
			fee = (int)((60 * t + m) / 10) * 10 * 200;
			printf("주차요금 : %d원\n", fee);
		}
		else if (V == 'b') {
			fee = (int)((60 * t + m) / 10) * 10 * 300;
			printf("주차요금 : %d원\n", fee);
		}
		else if (V == 't') {
			fee = (int)((60 * t + m) / 10) * 10 * 500;
			printf("주차요금 : %d원\n", fee);
		}

		return 0;
	}
}