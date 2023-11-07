#include <stdio.h>

int main(void) {
	FILE* inFp, * outFp;
	int state;
	int upper = 0;
	int lower = 0;
	int arab = 0;
	int blank = 0;
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[50];

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

	sprintf(str1, "Number of upper case letters : %d\n", upper);
	sprintf(str2, "Number of lower case letters : %d\n", lower);
	sprintf(str3, "Number of arabic characters : %d\n", arab);
	sprintf(str4, "Number of blanks : %d\n",blank);
	
	fputs(str1, stdout);
	fputs(str2, stdout);
	fputs(str3, stdout);
	fputs(str4, stdout);
	
	fputs(str1, outFp);
	fputs(str2, outFp);
	fputs(str3, outFp);
	fputs(str4, outFp);


	fclose(inFp);
	fclose(outFp);

	return 0;
	
}