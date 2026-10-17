#include <stdio.h>

int main() {
    int start, stop, step, a;
    printf("Enter 3 integers: start, stop, and step\n");
    scanf("%d%d%d", &start, &stop, &step);
    while (start <= stop){
        printf("%d \n", start);
        start += step;
    }
return 0;
}