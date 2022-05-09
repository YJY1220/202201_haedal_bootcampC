#include <stdio.h>
#include <string.h>

char a[10001];
char b[10001];
int ans[10001];
int a_len, b_len;

int main() {


    scanf("%s %s", a, b);

    a_len = strlen(a) - 1;
    b_len = strlen(b) - 1;

    int x, y, temp, c = 0;

    while (a_len >= 0 || b_len >= 0) {

        x = (a_len >= 0) ? (a[a_len] - '0') : 0;
        y = (b_len >= 0) ? (b[b_len] - '0') : 0;

        temp = ans[c] + x + y;
        ans[c] = temp % 10;
        ans[c + 1] = temp / 10;

        c++;
        a_len--;
        b_len--;
    }

  
    if (ans[c] == 0)
        c--;

    for (; c >= 0; c--)
        printf("%d", ans[c]);
}