#include <stdio.h>
#include <string.h>

int main() {
	char str[16] = "sum = sum + 10;";
	char* pToken;
	int tokencount = 0;

	pToken = strtok(str, " ;");// ���鿡 ���� �з�(������ ���͵� �޾�����ϱ⿡ ;�� ��), ���� ptoken�� ���� token�� �Ǵ� ���� \0�� ����

	while (pToken) {
		tokencount++;
		printf("Token %2d contains %s\n", tokencount, pToken);
		pToken = strtok(NULL, " ;");// ptoken �ʱ�ȭ

	printf("\nEnd of tokens\n");
	return 0;
}