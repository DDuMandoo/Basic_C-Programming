#include <stdio.h>
#include <stdbool.h>

int main() {
	bool a = true;
	bool b = true;
	bool c = false;
	printf("      %d AND      %d :  %d\n", a, b, a && b);
	printf("      %d AND      %d :  %d\n", a, c, a && c);
	printf("      %d AND      %d :  %d\n", c, b, c && b);
	printf("      %d OR       %d :  %d\n", a, c, a || c);
	printf("      %d OR       %d :  %d\n", c, b, c || b);
	printf("      %d OR       %d :  %d\n", c, c, c || c);
	printf("NOT   %d AND NOT  %d :  %d\n", a, c, !a && c);
	printf("NOT   %d AND      %d :  %d\n", a, c, !a && c);
	printf("      %d AND NOT  %d :  %d\n", a, c, a && !c);

	return 0;
}