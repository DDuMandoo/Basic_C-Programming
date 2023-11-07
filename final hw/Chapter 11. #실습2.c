#include <stdio.h>
#include <string.h>

int main() {
	char str[16] = "sum = sum + 10;";
	char* pToken;
	int tokencount = 0;

	pToken = strtok(str, " ;");// 공백에 따라 분류(하지만 엔터도 받아줘야하기에 ;도 씀), 또한 ptoken에 의해 token이 되는 순간 \0이 생김

	while (pToken) {
		tokencount++;
		printf("Token %2d contains %s\n", tokencount, pToken);
		pToken = strtok(NULL, " ;");// ptoken 초기화

	printf("\nEnd of tokens\n");
	return 0;
}