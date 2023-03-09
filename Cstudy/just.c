#include<stdio.h>
#include<stdlib.h>
int sub(int a, int b)
{
	return a - b;
}

int main(void)
{
	int result = 0;
	result = sub(5, 2);
	printf("%d\n", result);

	system("pause");
	printf("일시 정지 끝남");
	return 0;
}