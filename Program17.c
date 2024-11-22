//Transpose of a matrix
#include <stdio.h>
int main () {
    int i, j, x = 2, y = 3;
    int arr[2][3] = {3, 4, 6, 1, 8, 9};
    int trans[3][2];
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    printf("Transpose of matrix is:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Transpose[%d][%d] = %d\n",i,j,trans[i][j]);
        }
    }
    return 0;
}