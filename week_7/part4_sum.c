// Sum of Command Line Arguments
// This program takes multiple integers as command-line 
// arguments and prints their sum.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        // If each argment is a number, sum them:
        sum += atoi(argv[i]);

        // If we wanted to count the size of each argument:
        // sum += strlen(argv[i])
    }

    printf("Sum: %d\n", sum);

    return 0;
}
