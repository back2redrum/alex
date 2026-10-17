#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 2 integers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("max = %d\n", a);
    else if (b > a)
        printf("max = %d\n", b);
    else
        printf("The numbers are equal\n");
return 0;
}