#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ================= 1D ARRAY - WEEKLY REVENUE TRACKER =================
    float revenue[7];
    float total = 0, average = 0;

    printf("=== 1D ARRAY: WEEKLY REVENUE TRACKER ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
    average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    // ================= 2D ARRAY - ROOM OCCUPANCY (ONE BRANCH) =================
    int occupancy[5][10];

    printf("\n=== 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH) ===\n");
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

    // ================= 3D ARRAY - MULTIPLE BRANCHES =================
    int chain[3][5][10];

    printf("\n=== 3D ARRAY: MULTIPLE BRANCHES ===\n");
    // Simulate with random data: 1 = occupied, 0 = vacant