#include <stdio.h>
int main() {
    int a = 10, b = 25, c = 15;
    if (a > b && a > c)
        printf("%d is the greatest\n", a);
    else if (b > c)
        printf("%d is the greatest\n", b);
    else
        printf("%d is the greatest\n", c);
    return 0;
}

