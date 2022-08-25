#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    char a;
    int cnt = 0;
    while (1) {
        scanf("%c", &a);
        if (a == '*') {
            break;
        }
        switch (a)
        {
        case 'a':
            cnt += 1;
            break;
        case 'e':
            cnt += 1;
            break;
        case 'i':
            cnt += 1;
            break;
        case 'o':
            cnt += 1;
            break;
        case 'u':
            cnt += 1;
            break;
        default:
            break;
        }
    }
    printf("%d", cnt);
}