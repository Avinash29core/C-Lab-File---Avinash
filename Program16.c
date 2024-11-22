//Matrix multiplication
#include <stdio.h>
int main () {
    int i, j, k;
    int arr1[2][3] = {3, 5, 6, 1, 7, 8};
    int arr2[3][2] = {3, 6, 8, 9, 1, 2};
    int x = 2, y = 3, z = 2, arr3[2][2];
    for (i = 0; i < x; i++) {
        for (k = 0; k < z; k++) {
            arr3[i][k] = 0;
        }
    }
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            for (k = 0; k < z; k++) {
                arr3[i][k] = arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("The resultant array is:\n");
    for (i = 0; i < x; i++) {
        for (k = 0; k < z; k++) {
            printf("Arr[%d][%d] = %d\n",i,k,arr3[i][k]);
        }
    }
    return 0;
}