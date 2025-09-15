#include <stdio.h>

int main() {
    int i, bp, total = 0;
    float average;

    // For loop to read 4 readings
    for (i = 1; i <= 4; i++) {
        printf("Enter systolic BP reading %d (mmHg): ", i);
        scanf("%d", &bp);

        total += bp;  // add to total
    }

    // Calculate average
    average = total / 4.0;

    // Display results
    printf("\n--- BP Results ---\n");
    printf("Total BP: %d mmHg\n", total);
    printf("Average BP: %.2f mmHg\n", average);

    return 0;
}
