#include <stdio.h>

int main() {
    int n, a, b;

    printf("Введите 2 целых числа: ");
    scanf("%d %d", &n, &a);
    b = n + a;
    printf("%d + %d = %d\n", n, a, b);

    return 0;
}

