#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];

    printf("=== MULTIPLE BRANCHES ===\n");

    // Simulate with random data: 1 = occupied, 0 = vacant
    srand(time(0));
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }
    }

    printf("--- Occupancy Summary For All Branches ---\n");
    for (int branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        int totalOccupied = 0, totalVacant = 0;

        for (int floor = 0; floor < 5; floor++) {
            int occupied = 0, vacant = 0;
            for (int room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }
            totalOccupied += occupied;
            totalVacant += vacant;
            printf("  Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
        }
        printf("  Branch %d Total: Occupied = %d, Vacant = %d\n", branch + 1, totalOccupied, totalVacant);
    }

    return 0;
}