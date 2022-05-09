#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int Min, Max; 
    scanf("%d %d", &Min, &Max);
    int sum = 0;                      
    int arr[Max - Min + 1];                
    for (int i = 0; i < Max - Min + 1; i++) 
        arr[i] = 0;

    for (int i = Min; i < Max + 1; i++)
    {
        int flag;  
        if (i == 1) 
        {
            continue;
        }
        else if (i == 2) 
        {
            flag = 1;
        }
        else 
        {
            for (int j = 2; j < i; j++)
            {
                flag = 0;  
                if (i % j == 0) 
                {
                    break;
                }
                flag = 1; 
            }
        }

        if (flag == 1)
        {
            sum += i;
            arr[i - Min] = i;
        }
    }
    for (int i = 0; i < Max - Min + 1; i++)
    {
        if (arr[i] != 0) 
        {
            printf("%d\n%d", sum, arr[i]); 
            return 0;
        }
    }
    printf("-1");
    return 0;
}