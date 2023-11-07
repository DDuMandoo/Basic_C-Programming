#include <stdio.h>

int main(void) {
	FILE* inFp, * outFp;
	int state;
	int upper = 0;
	int lower = 0;
	int arab = 0;
	int blank = 0;

	inFp = fopen("input.txt", "r");
	if (inFp == NULL) {
		printf("input file open error!\n");
		return 1;
	}
	outFp = fopen("output.txt", "w");
	if (outFp == NULL) {
		printf("output file open error!\n");
		return 1;
	}
	while (1) {
		state = fgetc(inFp);
		if (state == EOF) {
			break;
		}
		else {
			if ((state >= '0') && (state <= '9')) {
				arab++;
			}

			else if ((state >= 'a') && (state <= 'z')) {
				lower++;
			}

			else if ((state >= 'A') && (state <= 'Z')) {
				upper++;
			}

			else if (state == ' ') {
				blank++;
			}

			else if (state == '\n') {
			}
		}
	}

	fprintf(outFp, "Number of upper case letters : %d\n", upper);
	fprintf(outFp, "Number of lower case letters : %d\n", lower);
	fprintf(outFp, "Number of arabic characters : %d\n", arab);
	fprintf(outFp, "Number of blanks : %d\n", blank);
	fclose(inFp);
	fclose(outFp);

	return 0;
}