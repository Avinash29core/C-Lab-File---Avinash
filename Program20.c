//Demonstrating pointer arithmetic
#include <stdio.h>
int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n",i,*(ptr + i));
    }
    printf("Modifying array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        *(ptr + i) += 5;
        printf("Modified element %d: %d\n",i,*(ptr + i));
    }
    return 0;
}