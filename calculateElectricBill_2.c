#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    printf("Fare for 10 km: KSh. %.2f\n", calculateFare(10));
    return 0;
}