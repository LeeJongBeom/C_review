#include <stdio.h>

void updatd_value(int* p)
{
	*p = 100;
}

int main()
{
	int a = 10;
	printf("�Լ� ȣ�� �� : %d\n", a);
	updatd_value(&a);
	printf("�Լ� ȣ�� �� : %d\n", a);

	return 0;
}