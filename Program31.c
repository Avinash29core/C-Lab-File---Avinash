//Write and read a file character by character
#include <stdio.h>
int main () {
    FILE *file;
    char filename[100];
    char ch;
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file %s for writing\n",filename);
        return 1;
    }
    printf("Enter text to write to the file (Press Ctrl+Z+Enter once done):\n");
    getchar();
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }
    fclose(file);
    printf("\nData written to %s successfully\n",filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s for reading\n",filename);
        return 1;
    }
    printf("\nContents of the file: \n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}