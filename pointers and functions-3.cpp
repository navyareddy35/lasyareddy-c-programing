#include <stdio.h>

void countEvenOdd(int *arr, int size, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for(int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int even, odd;
    countEvenOdd(arr, 6, &even, &odd);
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}

