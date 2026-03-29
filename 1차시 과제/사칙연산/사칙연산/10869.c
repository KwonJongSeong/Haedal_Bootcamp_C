#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%d\n", A + B);  // 덧셈
    printf("%d\n", A - B);  // 뺄셈
    printf("%d\n", A * B);  // 곱셈
    printf("%d\n", A / B);  // 몫
    printf("%d\n", A % B);  // 나머지

    return 0;
}