//Sum of digits
#include <stdio.h>
int main () {
    int n, rem = 0, sum = 0;
    printf("Enter a 2 digit number or greater: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}