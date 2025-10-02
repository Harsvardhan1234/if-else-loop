#include <stdio.h>

void main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The first number is greater than the second number.\n");
    } else {
        printf("The first number is not greater than the second number.\n");
    }
}
