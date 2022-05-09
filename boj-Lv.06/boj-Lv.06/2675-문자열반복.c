#include <stdio.h>
#include <string.h>

int main() {
    int T, R;
    char S[21];

    scanf("%d", &T);
    //T��ŭ�� �׽�Ʈ���̽�
    while (T--) {
        scanf("%d %s", &R, S);

        //����� ����ϱ� ���� �ݺ���
        for (int i = 0; i < strlen(S); i++) {
            for (int j = 0; j < R; j++)
                printf("%c", S[i]);
        }

        printf("\n");
    }
    return 0;
}