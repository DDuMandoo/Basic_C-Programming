#include <stdio.h>
int sectohours(long time, int* hours, int* minutes, int* seconds);

int main() {
	int a, min, hour,sec;
	int* h = &hour;
	int* m = &min;
	int* s = &sec;

	printf("Enter localtime : ");
	scanf("%d", &a);
	printf("%d\n",sectohours(a, h, m, s));

	return 0;
}
int sectohours(long time, int* hours, int* minutes, int* seconds){
	long localTime;
	localTime = time;
	*seconds = localTime % 60;
	localTime = localTime / 60;
	*minutes = localTime % 60;
	*hours = localTime / 60;

	if (*hours > 24) {
		return 0;
	}
	else {
		return 1;
	}
}

	