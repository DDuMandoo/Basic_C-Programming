#include <stdio.h>

int main(void) {
	FILE* inFp, * outFp;
	int state, score;

	inFp = fopen("FILE1.txt", "r");
	if (inFp == NULL) {
		printf("FILE1 open error!\n");
		return 1;
	}
	outFp = fopen("FILE2.txt", "w");
	if (outFp == NULL) {
		printf("FILE2 open error!\n");
		return 1;
	}
	while (1) {
		state = fscanf(inFp, "%d", &score);
		if (state == EOF) {
			break;
		}

		else {
			if (score >= 90) {
				fprintf(outFp, "%d\n", score);
			}
		}
	}
	fclose(inFp);
	fclose(outFp);

	return 0;
}