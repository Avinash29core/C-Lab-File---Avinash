//Binary search
#include <stdio.h>
int main () {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, left, right, mid;
    printf("Enter the value you want to search: ");
    scanf("%d", &target);
    left = 0;
    right = size - 1;
    mid = (left + right) / 2;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target) {
            printf("Value %d found at index %d",target,mid);
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            printf("Value %d not found in array",target);
        }
    }
    return 0;
}