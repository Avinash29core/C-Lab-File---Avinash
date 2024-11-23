//Program for dynamic memory allocation for an array of integers
#include <stdio.h>
#include <stdlib.h>
int main () {
    int *array;
    int size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d integers:\n",size);
    for (i = 0; i < size; i++) {
        scanf("%d", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}