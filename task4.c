#include <stdio.h>

int main() {
    int a, b, c, d, sum, array[3] = {0};
    sum = 0;
    d = 0;
    printf("Enter 3 integers\n");
    scanf("%d%d%d", &array[0], &array[1], &array[2]);
    while (d < 3) {
        if (array[d] > 0) {
            sum += array[d];
        }
        d += 1;
    }
    printf("%d\n", sum);
;
return 0;
}