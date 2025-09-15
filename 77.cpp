#include <stdio.h>

int main() {
    float temperature;

    // Accept input
    printf("Enter body temperature (°C): ");
    scanf("%f", &temperature);

    // Classify with if-else
    if (temperature < 35.0) {
        printf("LOW temperature detected (%.1f °C)\n", temperature);
    }
    else if (temperature <= 37.5) {
        printf("NORMAL temperature detected (%.1f °C)\n", temperature);
    }
    else {
        printf("HIGH temperature detected (%.1f °C)\n", temperature);
    }

    return 0;
}
