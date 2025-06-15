#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
	float grade;
} Student;

void print_student(Student* s)
{
	printf("ÀÌ¸§: %s, ³ªÀÌ : %d, ¼ºÀû : %.1fÁ¡\n", s->name, s->age, s->grade);
}

int main()
{
	Student students[2] = {
	{"È«±æµ¿", 20, 85.5 },
	{"±èÃ¶¼ö", 22, 90.0 }
	};

	for (int i = 0; i < 2; i++)
	{
		print_student(&students[i]);
	}
}