#include<stdio.h>
#include<stdlib.h>
int sub(int a, int b)
{
	return a - b;
}

int main(void)
{
	int cnt, num;
	num = 100;
	int sum = 0;
	for (int i = 2; i <= num; i++)
	{
		cnt = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
			
		}
		sum += cnt;
		if (cnt == 1) // 나눠지는 수가 1개 뿐인 경우
			printf("%d ", i);

	}
	printf("\n\n%d", sum);
	return 0;
}