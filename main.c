#include <stdio.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

int main (void) {
	struct student s1 = {23, "¹ÚÈñ¼ö", 4.3};
	s1.ID = 12;
	strcpy(s1.name, "huisu");
	s1.grade = 4.2;
	printf("ID: %d\n", s1.ID);
	printf("NAME: %s\n", s1.name);
	printf("GRADE: %f\n", s1.grade);
	
}

