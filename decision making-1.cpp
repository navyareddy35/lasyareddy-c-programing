#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is UPPERCASE.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character is LOWERCASE.\n");
    } else {
        printf("The character is NOT a letter.\n");
    }

    return 0;
}












