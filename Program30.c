//Append contents to a file character by character
#include <stdio.h>
int main () {
    FILE *file;
    char filename[100];
    char ch;
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    printf("Enter text to append (Press Ctrl+Z+Enter to stop):\n");
    getchar();
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }
    fclose(file);
    printf("\nContent appended to %s successfully\n",filename);
    return 0;
}