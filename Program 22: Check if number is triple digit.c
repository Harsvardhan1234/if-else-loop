#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        printf("The number is a triple digit.\n");
    } else {
        printf("The number is not a triple digit.\n");
    }
}
