//Simple calculator
#include <stdio.h>
int main () {
    int a, b, choice;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter 1 for addtion\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Sum is %d",a + b);
            break;
        case 2:
            printf("Subtractions is %d",a - b);
            break;
        case 3:
            printf("Multiplication is %d",a * b);
            break;
        case 4:
            printf("Division is %d",a / b);
            break;
        case 5:
            printf("Modulus is %d",a % b);
            break;
    }
    return 0;
}