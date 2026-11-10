#include <stdio.h>

int main() {
    int nums[6];
    int i, largest, smallest;

    printf("Enter 6 numbers:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &nums[i]);
    }

    largest = nums[0];
    smallest = nums[0];

    for (i = 1; i < 6; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    