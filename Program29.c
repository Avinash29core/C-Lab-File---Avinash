//Read the contents of a file character by character using getch
#include <stdio.h>
int main () {
    FILE *file;
    char filename[100];
    char ch;
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n",filename);
        return 1;
    }
    printf("\nContents of the file:\n");
    while ((ch == getc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}