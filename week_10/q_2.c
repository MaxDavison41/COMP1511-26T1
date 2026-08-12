#include <stdio.h>

#define NUM_ROWS 4
#define MAX_COLS 100

// Return the number of horizontal rows that add up to 0
// Rows is fixed at NUM_ROWS
// Cols is passed into function via size
int count_neutral_rows(int size, int array[NUM_ROWS][MAX_COLS]) {
    int neutral_rows = 0;
    for (int row = 0; row < NUM_ROWS; row++) {
        int sum = 0;
        for (int col = 0; col < size; col++) {
            sum += array[row][col];
        }
        if (sum == 0) {
            neutral_rows++;
        }
    }

    return neutral_rows;
}

// This is a simple main function which could be used
// to test your count_neutral_rows function.
// It will not be marked.
// Only your count_neutral_rows function will be marked.
int main(void) {
    int test_array[NUM_ROWS][MAX_COLS] = {
        {1, 2, 3, -3, -3}, // 0
        {1, 4, 3, -3, -2}, // 3
        {1, 2, 3, -1, -5}, // 0
        {1, 2, 0, -3, -3} // -3
    };

    int result = count_neutral_rows(5, test_array);
    printf("%d\n", result);

    return 0;
}
