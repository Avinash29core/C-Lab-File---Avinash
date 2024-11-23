//Program to manipulate string using pointers
#include <stdio.h>
#include <ctype.h>
void manipulateString(char *str);
int main () {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char *newline = str;
    while (*newline) {
        if (*newline == '\n') {
            *newline = '\0';
        }
        newline++;
    }
    manipulateString(str);
    return 0;
}
void manipulateString (char *str) {
    char *start = str, *end = str;
    int length = 0;
    while (*end) {
        length++;
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    for (start = str; *start; start++) {
        *start = toupper(*start);
    }
    printf("Reversed and Uppercase string: %s\n",str);
    printf("Length of the string: %d",length);
}