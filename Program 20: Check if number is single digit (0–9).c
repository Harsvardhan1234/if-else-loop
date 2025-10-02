#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9) {
        printf("The number is a single digit.\n");
    } else {
        printf("The number is not a single digit.\n");
    }
}
