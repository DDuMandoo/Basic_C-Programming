#include <stdio.h>

typedef struct {
	char name[20];
	char mail[30];
	int mobile;
}PROF;

typedef struct {
	char name[20];
	char major[20];
	int id;
	float cgpa;
}STUD;

typedef struct {
	char type;
	union {
		PROF prof;
		STUD stu;
	}u;
}PERSON;

void printPerson(PERSON person[], int size);

int main(void) {
	PERSON person[4];

	person[0].type = 'p';
	strcpy(person[0].u.prof.name, "james");
	strcpy(person[0].u.prof.mail, "james@hanmail.net");
	person[0].u.prof.mobile = 1097063456;

	person[1].type = 's';
	strcpy(person[1].u.stu.name, "david");
	strcpy(person[1].u.stu.major, "computer science");
	person[1].u.stu.id = 20010123;
	person[1].u.stu.cgpa = 3.10;

	person[2].type = 's';
	strcpy(person[2].u.stu.name, "peter");
	strcpy(person[2].u.stu.major, "physics");
	person[2].u.stu.id = 20212345;
	person[2].u.stu.cgpa = 3.54;

	person[3].type = 'p';
	strcpy(person[3].u.prof.name, "irene");
	strcpy(person[3].u.prof.mail, "irene@sogang.ac.kr");
	person[3].u.prof.mobile = 1093050123;

	printPerson(person, 4);

	return 0;
}

void printPerson(PERSON person[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("-------------------------\n");
		if (person[i].type == 'p') {
			printf("name: %s\n", person[i].u.prof.name);
			printf("mail: %s\n", person[i].u.prof.mail);
			printf("mobile: %d\n", person[i].u.prof.mobile);
		}
		else {
			printf("name: %s\n", person[i].u.stu.name);
			printf("major: %s\n", person[i].u.stu.major);
			printf("id: %d\n", person[i].u.stu.id);
			printf("cgpa: %.2f\n", person[i].u.stu.cgpa);
		}
	}
	return;
}