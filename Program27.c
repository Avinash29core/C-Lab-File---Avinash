//Program using union to store different data types
#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main () {
    union Data data;
    data.i = 42;
    printf("Integer: %d\n",data.i);
    data.f = 3.14;
    printf("Float: %.2f\n",data.f);
    snprintf(data.str, sizeof(data.str), "Hello, Union");
    printf("String: %s\n", data.str);
    return 0;
}