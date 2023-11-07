#include <stdio.h>

int main() {
	FILE* spTemps;
	int state;

	spTemps = fopen("c:\\test\\TEMP.DAT", "w");
	if (spTemps == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fprintf(spTemps, "%2d,%s\n", 10, "Hello");

	state = fclose(spTemps);
	if (state != 0) {
		printf("file close error!\n");
		return 1;
	}
	return 0;
}