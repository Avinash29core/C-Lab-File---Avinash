//Number palindrome check
#include <stdio.h>
int main () {
    int n, rev = 0, temp, rem = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (temp == rev) {
        printf("%d is palindrome",temp);
    } else {
        printf("%d is not palindrome",temp);
    }
    return 0;
}