#include <stdio.h>
#include <stdlib.h>

#define NUMLETTERS 26

typedef struct {
    char letter;
    int number;
} record_t;

int main(void) {
    FILE *fp;
    record_t records[NUMLETTERS];
    size_t count = 0;

    fp = fopen("tmp/test.csv", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error reading file\n");
        return 1;
    }

    while (fscanf(fp, " %c,%d", &records[count].letter, &records[count].number) == 2) {
        count++;
    }

    for (size_t i = 0; i < count; i++) {
        printf("%c,%d\n", records[i].letter, records[i].number);
    }

    fclose(fp);

    return 0;
} 