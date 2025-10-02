#include <stdio.h>

void main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("The first number is smaller than the second number.\n");
    } else {
        printf("The first number is not smaller than the second number.\n");
    }
}
