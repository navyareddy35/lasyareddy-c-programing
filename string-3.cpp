#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int flag;

    printf("Enter a string: ");
    gets(str);

    strcpy(rev, str);
    strrev(rev); 

    flag = strcmp(str, rev);

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

