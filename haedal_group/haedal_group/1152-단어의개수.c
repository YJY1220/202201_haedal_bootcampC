#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000001
int main(void) 
{
    char sentence[1000001];
    scanf("%[^\n]s", sentence);

    int len = strlen(sentence);
    int space_cnt = 0;

    for (int i = 0; i < len; i++) 
    {
        if (sentence[i] == ' ')
        {
            if (i != 0 && i != len - 1)
            {
                space_cnt++;
            }
            if (len == 1)
            {
                space_cnt = -1;
            }
        }
    }

    printf("%d\n", space_cnt + 1);
}