#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("The character is lowercase.\n");
    } else {
        printf("The character is not lowercase.\n");
    }
}
