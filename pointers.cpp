#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;
    int *p1 = &a, *p2 = &b;

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

