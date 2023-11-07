#include <stdio.h>

struct student {
	int id;
	char name[10];
};
typedef struct student std;

int main() {
	std s1 = { 123456,"trump" };
	printf("id : %d, name : %s\n", s1.id, s1.name);
	return 0;
}