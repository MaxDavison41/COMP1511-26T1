// Program that demonstrates scanf being used in a while loop condition.
// Written by Max Davison z5492092

#include <stdio.h>

int main(void) {

    // Demo of how using " %c" vs "%c" in scanf
    int integer;
    char character;

    scanf("%d", &integer);
    scanf("%c", &character);

    printf("Integer: '%d'\n", integer);
    printf("Character: '%c'\n", character);

    // Demo of Scanf in a loop body to understand the scan buffer
    printf("Please enter an integer: ");
    scanf("%d", integer);
    
    int counter = 0;
    while (counter < integer) {
        scanf(" %c", character);
        printf("You just scanned '%c\n", character);
        counter++;
    }

    // Demo of Scanf in a loop condition - Press ctrl+D to exit loop
    printf("Please enter an integer: ");
    while (scanf("%d", integer) == 1) {
        printf("You just scanned '%d\n", integer);
        printf("Please enter an integer: ");
    }

    return 0;
}


