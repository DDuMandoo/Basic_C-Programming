#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int range;
	int i;
	srand(time(NULL));
	range = (6 - 1) + 1;
	i = rand() % range + 1;

	printf("The random number is %d\n", i);

	return 0;
}