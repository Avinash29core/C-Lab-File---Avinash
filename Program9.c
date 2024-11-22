//Prime number check
#include <stdio.h>
int main () {
    int i, n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1 || n == 2) {
        printf("%d is prime",n);
    } else {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                flag++;
            }
        }
        if (flag == 1) {
            printf("%d is prime",n);
        } else {
            printf("%d is not prime",n);
        }
    }
    return 0;
}