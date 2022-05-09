#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char Str[100];
	char Collection[100];
	int N = 0;
	int Count = 0;
	int On = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", &Str);
		On = 0;

		for (int j = 0; j < strlen(Str); j++)
		{
			Collection[j] = Str[j];

			for (int k = 0; k < j; k++)
			{
				if (Str[j] == Collection[k] && (Str[j - 1] != Collection[k]))
				{
					On = 1;
					break;
				}
			}
		}
		if (On == 0)
			Count++;
	}
	printf("%d", Count);
}