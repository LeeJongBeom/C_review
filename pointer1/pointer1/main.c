#include <stdio.h>

void updatd_value(int* p)
{
	*p = 100;
}

int main()
{
	int a = 10;
	printf("함수 호출 전 : %d\n", a);
	updatd_value(&a);
	printf("함수 호출 후 : %d\n", a);

	return 0;
}