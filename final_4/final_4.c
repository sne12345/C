
#include <stdio.h>
// ch�� w�ȿ� ������ 1��, ������ 0�� ��ȯ�Ѵ�
int is_in(char w[], char ch)  // ��� ���ص� ��
{
    int bool1 = 0;
    for (int i = 0; w[i] != '\0'; i++) {
        if (w[i] == ch) {
            bool1 = 1;
            break;
        }
    }
    return bool1;
}

int main(void)
{
    char word[20];
    int count = 0;
    scanf_s("%s", word,sizeof(word));

    for (int i = 0; i < 26; i++) {
        if (is_in(word, (char)(i + 65)) == 1);
        else
            printf("%c", (char)(i + 65));
    }
}
