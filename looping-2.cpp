#include <stdio.h>
int main() {
    int n = 5, sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
