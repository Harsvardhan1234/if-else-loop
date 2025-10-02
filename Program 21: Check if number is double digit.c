#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99) {
        printf("The number is a double digit.\n");
    } else {
        printf("The number is not a double digit.\n");
    }
}
