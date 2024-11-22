//GCD and LCM
#include <stdio.h>
int main () {
    int n1, n2, gcd, lcm, count = 1, small;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    small = (n1 < n2) ? n1 : n2;
    while (count <= small) {
        if (n1 % count == 0 && n2 % count == 0) {
            gcd = count;
        }
        count++;
    }
    lcm = (n1 * n2) / gcd;
    printf("GCD = %d\n",gcd);
    printf("LCM = %d",lcm);
    return 0;
}