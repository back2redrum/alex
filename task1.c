#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer\n");
    scanf("%d", &a);
    if (a > 0)
        printf("The number is positive\n");
    else if (a < 0)
        printf("The number is negative\n");
    else
        printf("The number is equal to 0\n");
return 0;
}