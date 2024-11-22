//Array operations
#include <stdio.h>
int main () {
    int n, i;
    printf("Enter number of elements you want to enter in array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element at position %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Your array is: \n");
    for (i = 0; i < n; i++) {
        printf("Arr[%d] = %d\t",i,arr[i]);
    }
    return 0;
}