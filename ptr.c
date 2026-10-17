#include <stdio.h>

int main() {
    int n = 42;
    printf("%d\n", n);
    printf("%p\n", &n);  // & - амперсанд (операция взятия адреса)
    printf("\n");

    int *p = &n;  // int * - указатель на int (на переменную n)
    printf("%p\n", p);
    printf("%d\n", *p);  // * - разыменование (переход к содержимому ячейки по адресу)

    *p = 21;

    printf("%d\n", n);

    return 0;
}

