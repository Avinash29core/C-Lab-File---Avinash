//Find the largest of 3 numbers
#include <stdio.h>
int main () {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d is greatest",a);
    } else if (b > c && b > a) {
        printf("%d is greatest",b);
    } else {
        printf("%d is greatest",c);
    }
    return 0;
}