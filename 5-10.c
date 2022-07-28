#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 10번
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double avg = (a + b + c) / 3.0;
    if (avg >= 91.5) {
        printf("A");
    } else if (avg >=85.5) {
        printf("B");
    } else if (avg >= 80.5) {
        printf("C");
    } else {
        printf("F");
    }
    
    if (a == 100 || b==100 || c==100) {
        printf("Good");
    }
    if (a < 60 || b < 60 || c < 60) {
        printf("Bad");
    }
}