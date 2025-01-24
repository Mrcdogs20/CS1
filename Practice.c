#include <stdio.h>

int main(void) {
    int array[] = {1, 5, 1, 8, 2, 6, 5}; // Array initialization
    int max_sum = 0;
    int num1 = 0, num2 = 0; // Variables to store the pair of integers
    int i, j; // Loop variables

    for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        for (j = i + 1; j < sizeof(array)/sizeof(array[0]); j++) {
            if (array[i] + array[j] > max_sum) {
                max_sum = array[i] + array[j];
                num1 = array[i];
                num2 = array[j];
            }
        }
    }

    printf("The pair of integers with the highest sum are %d and %d\n", num1, num2);
    printf("The highest sum is %d\n", max_sum);

    return 0;
}
