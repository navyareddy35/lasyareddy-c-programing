#include <stdio.h>

int main() {
    int arr[100], n, i, *start, *end, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    start = arr;
    end = arr + n - 1;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

