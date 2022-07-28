#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 13번
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double avg = (a + b + c) / 3.0;

    printf("%.2f\n", avg);

    if (avg >= 75.0) {
        printf("A");
    } else if (avg >= 50.0) {
        printf("B");
    } else {
        printf("F");
    }
}