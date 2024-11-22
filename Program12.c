//Armstrong number (3 digits)
#include <stdio.h>
int main () {
    int n, rem, sum = 0, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if (sum == temp) {
        printf("%d is armstrong",temp);
    } else {
        printf("%d is not armstrong",temp);
    }
    return 0;
}