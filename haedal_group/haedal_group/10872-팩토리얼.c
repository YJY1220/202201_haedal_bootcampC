#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int num);

int main(void)
{
	int N;

	scanf("%d", &N);

	printf("%d\n", func(N));

	return 0;
}

int func(int num)
{
	if (num > 1)
	{
		return num * func(num - 1);
	}
	else
	{
		return 1;
	}
}