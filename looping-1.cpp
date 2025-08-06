#include <stdio.h>
int main() {
    int n = 5, i;
    int fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

