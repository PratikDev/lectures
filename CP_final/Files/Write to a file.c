#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    FILE *fp;

    // open file in write mode
    fp = fopen("file.txt", "w");

    if (fp == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    printf("Enter text to write to file: ");
    gets(input);

    // write input to file
    fputs(input, fp);

    printf("Data written to file successfully.\n");

    // close file
    fclose(fp);

    return 0;
}