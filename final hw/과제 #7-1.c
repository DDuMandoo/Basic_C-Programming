#include <stdio.h>

int main(void) {
	int score1[3];
	int score2[3];
	int avg1, avg2;
	

	printf("ö���� ������ �Է��Ͻÿ�.\n");
	printf("���� : ");
	scanf("%d", &score1[0]);
	printf("���� : ");
	scanf("%d", &score1[1]);
	printf("���� : ");
	scanf("%d", &score1[2]);
	printf("������ ������ �Է��Ͻÿ�.\n");
	printf("���� : ");
	scanf("%d", &score2[0]);
	printf("���� : ");
	scanf("%d", &score2[1]);
	printf("���� : ");
	scanf("%d", &score2[2]);

	avg1 = (score1[0] + score1[1] + score1[2]) / 3;
	avg2 = (score2[0] + score2[1] + score2[2]) / 3;

	printf("ö��\n���� : %d��, ���� : %d��, ���� : %d��, ��� : %d��\n", score1[0], score1[1], score1[2], avg1);
	printf("����\n���� : %d��, ���� : %d��, ���� : %d��, ��� : %d��\n", score2[0], score2[1], score2[2], avg2);

	return 0;
}