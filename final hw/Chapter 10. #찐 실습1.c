#include <stdio.h>

int main() {
	FILE* infp, *outfp;
	char name[20];
	int age;
	double h;
	int state;
	int sum1 = 0; int sum2 = 0; int i = 0;
	
	infp = fopen("studentIn.txt", "r");
	if (infp == NULL) {
		printf("input file open error!\n");
		return 1;
	}
	outfp = fopen("stdentOut.txt", "w");
	if (outfp == NULL) {
		printf("output file open error!\n");
		return 1;
	}
	while (1) {
		state = fscanf(infp, "%s %d %lf", name, &age, &h);
		if (state == EOF) break;
		sum1 = sum1 + h;
		sum2 = sum2 + age;
		i++;
		fprintf(outfp, "%.1lf %d %s\n", h, age, name);
	}
	fprintf(outfp, "Average height: %.1lf Average age: %d", sum1/i, sum2/i);

	fclose(infp);
	fclose(outfp);
	return 0;
}