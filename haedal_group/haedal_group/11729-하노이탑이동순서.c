#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int hanoi(int a, int b, int n);

int main(void)
{
	int n;
	int t;

	scanf("%d", &n);

	t = pow(2, n) - 1;

	printf("%d\n", t);

	hanoi(1, 3, n);
}

int hanoi(int a, int b, int n)
{
	if (n == 1)
		printf("%d %d\n", a, b);
	else
	{
		hanoi(a, 6 - a - b, n - 1);
		printf("%d %d\n", a, b);
		hanoi(6 - a - b, b, n - 1);
	}
}

