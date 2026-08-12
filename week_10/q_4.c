#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1024

// Scan in integers into an int array until Ctrl+D or 0 is entered
// Print out the even indexes of the array
// Print out the odd indexes of the array
int main(void) {
    int array[MAX_SIZE];

    int integer;
    int index = 0;
    while (scanf(" %d", &integer) == 1 && integer != 0) {
        array[index] = integer;
        index++;
    }

    int i = 0;
    while (i < index) {
        printf("%d ", array[i]);
        i = i + 2;
    }

    i = 1;
    printf("\n");

    while (i < index) {
        printf("%d ", array[i]);
        i = i + 2;
    }

    printf("\n");
    return 0;
}
