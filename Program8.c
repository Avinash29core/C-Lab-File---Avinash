//Fibonacci Series
#include <stdio.h>
int main () {
    int a = 0, b = 1, res, n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d = %d\n",i,a);
        res = a + b;
        a = b;
        b = res;
    }
    return 0;
}