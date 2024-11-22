//Matrix addition
#include <stdio.h>
int main () {
    int arr1[2][2] = {3, 5, 6, 1};
    int arr2[2][2] = {3, 6, 8, 9};
    int i, j, arr3[2][2];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The resultant array is: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Arr[%d][%d] = %d\n",i,j,arr3[i][j]);
        }
    }
    return 0;
}