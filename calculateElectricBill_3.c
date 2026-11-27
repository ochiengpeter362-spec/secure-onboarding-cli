#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    printf("212F in Celsius: %.2f\n", convertToCelsius(212));
    return 0;
}