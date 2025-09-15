#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;
}#include <stdio.h>

int main() {
    float temperature;

    // Input temperature
    printf("Enter body temperature (°C): ");
    scanf("%f", &temperature);

    // Classification using if...else
    if (temperature < 35.0) {
        printf("Temperature: %.1f °C ? Category: LOW\n", temperature);
    }
    else if (temperature >= 35.0 && temperature <= 37.5) {
        printf("Temperature: %.1f °C ? Category: NORMAL\n", temperature);
    }
    else {
        printf("Temperature: %.1f °C ? Category: HIGH\n", temperature);
    }

    return 0;
}
