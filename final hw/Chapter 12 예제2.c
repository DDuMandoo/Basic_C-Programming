#include <stdio.h>

enum week {SUN,MON,TUE,WED=1,THU,FRI,SAT};

int main() {
	enum week temp[7];
	int i;
	temp[0] = SUN;
	temp[1] = MON;
	temp[2] = TUE;
	temp[3] = WED;
	temp[4] = THU;
	temp[5] = FRI;
	temp[6] = SAT;
	for (i = 0; i < 7; i++) {
		printf("%d\n", temp[i]);
	}
	return 0;
}