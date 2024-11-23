//Program that passes a pointer function to change the value of a variable
#include <stdio.h>
void changeValue (int *ptr);
int main () {
    int num = 10;
    printf("Value before function call: %d\n",num);
    changeValue(&num);
    printf("Value after function call: %d\n",num);
    return 0;
}
void changeValue(int *ptr) {
    *ptr = 50;
}