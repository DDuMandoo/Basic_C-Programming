#include <stdio.h>

int main() {
	FILE* inFp, * outFp;
	char name[20];
	int age;
	double height;
	int state;

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
		state = fscanf(inFp, "%s %d %lf", name, &age, &height);
		if (state == EOF) break;
		fprintf(outFp, "%.1lf %d %s\n", height, age, name);
	}
	fclose(inFp);
	fclose(outFp);
	return 0;
}