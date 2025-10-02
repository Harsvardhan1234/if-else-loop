#include <stdio.h>

void main() {
    int password;

    printf("Enter password (number): ");
    scanf("%d", &password);

    if (password == 1234) {  
        printf("Password is correct.\n");
    } else {
        printf("Password is incorrect.\n");
    }
}
