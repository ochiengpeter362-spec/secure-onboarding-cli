#include <stdio.h>

float calculateElectricBill(float units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    return bill;
}

int main() {
    printf("Bill for 250 units: KSh. %.2f\n", calculateElectricBill(250));
    return 0;
}