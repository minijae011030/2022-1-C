#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    char ch;
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("%c", ch+32);
    } else if (ch >= 97 && ch <= 122) {
        printf("%c", ch-32);
    } else {
        printf("none");
    }
}