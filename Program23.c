//Program to traverse an array using pointers
#include <stdio.h>
void traverseArray(int *arr, int size);
int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array Elements: \n");
    traverseArray(arr, size);
    return 0;
}
void traverseArray(int *arr, int size) {
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        printf("%d",*ptr);
    }
    printf("\n");
}