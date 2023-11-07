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

void printPerson(PERSON person);

int main(void) {
	PERSON person1;
	PERSON person2;
	person1.type = 'p';
	strcpy(person1.u.prof.name, "james");
	strcpy(person1.u.prof.mail, "james@hanmail.net");
	person1.u.prof.mobile = 1097063456;
	
	person2.type = 's';
	strcpy(person2.u.stu.name, "david");
	strcpy(person2.u.stu.major, "computer science");
	person2.u.stu.id = 20010123;
	person2.u.stu.cgpa = 3.10;
	
	printPerson(person1);
	printPerson(person2);
	return 0;
}

void printPerson(PERSON person) {
	printf("-------------------------\n");
	if (person.type == 'p') {
		printf("name: %s\n", person.u.prof.name);
		printf("mail: %s\n", person.u.prof.mail);
		printf("mobile: %d\n", person.u.prof.mobile);
	}
	else {
		printf("name: %s\n", person.u.stu.name);
		printf("major: %s\n", person.u.stu.major);
		printf("id: %d\n", person.u.stu.id);
		printf("cgpa: %.2f\n", person.u.stu.cgpa);
	}
}