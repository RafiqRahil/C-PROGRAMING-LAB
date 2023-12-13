#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    char content[100];
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }
    printf("Enter the content to write to the file:\n");
    scanf(" %[^\n]s", content);
    fprintf(file, "%s", content);
    fclose(file);
    printf("Content has been written to the file.\n");
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }
    printf("\nContent read from the file:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
