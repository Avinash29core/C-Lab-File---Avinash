//Factorial of a number
#include <stdio.h>
int main () {
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i > 0; i--) {
        fact *= i;
    }
    printf("Factorial is %d",fact);
    return 0;
}