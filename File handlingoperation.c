#include <stdio.h>
#include <stdlib.h>

// a) Write to file - write mode "w"
void writeToFile() {
    FILE *fp;
    char sentence[200];

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    printf("Enter a sentence to write to file: ");
    getchar(); // clear newline left in buffer
    fgets(sentence, sizeof(sentence), stdin);

    fputs(sentence, fp);
    fclose(fp);
    printf("Sentence written successfully.\n\n");
}

// b) Read from file - read mode "r", one character at a time
void readFromFile() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    printf("Contents of file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n\n");
    fclose(fp);
}

// c) Append to file - append mode "a"
void appendToFile() {
    FILE *fp;
    char sentence[200];

    fp = fopen("sample.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }

    printf("Enter an additional sentence to append: ");
    fgets(sentence, sizeof(sentence), stdin);

    fputs(sentence, fp);
    fclose(fp);
    printf("Sentence appended successfully.\n\n");
}

// d) main function
int main() {
    writeToFile();   // 1. Write first sentence
    readFromFile();  // 2. Display contents
    appendToFile();  // 3. Add another sentence
    readFromFile();  // 4. Display updated contents

    return 0;
}