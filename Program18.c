//Bubble sort
#include <stdio.h>
int main () {
    int n, i, temp, j;
    printf("Enter number of elements you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("Arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}