#include <stdio.h>

int main() {
    int occupancy[5][10];

    printf("=== ROOM OCCUPANCY (ONE BRANCH) ===\n");
    printf("Enter 1 for Occupied, 0 for Vacant\n");

    for (int floor = 0; floor < 5; floor++) {
        printf("\nFloor %d:\n", floor + 1);
        for (int room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    printf("\n--- Occupancy Summary Per Floor ---\n");
    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}