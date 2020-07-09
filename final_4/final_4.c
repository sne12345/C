
#include <stdio.h>
// ch가 w안에 있으면 1을, 없으면 0을 반환한다
int is_in(char w[], char ch)  // 사용 안해도 됨
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
