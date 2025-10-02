#include <stdio.h>

void main() {
    int temp;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (temp > 30) {
        printf("It is hot.\n");
    } else {
        printf("It is normal.\n");
    }
}
