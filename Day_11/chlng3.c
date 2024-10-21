#include <stdio.h>

// Define a structure to represent a distance
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Convert any extra inches into feet
    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12); // Convert inches to feet
        result.inches = result.inches - ((int)(result.inches / 12) * 12); // Remaining inches
    }

    return result;
}

int main() {
    struct Distance d1, d2, result;

    // Input for the first distance
    printf("Enter feet and inches for the first distance: ");
    scanf("%d %f", &d1.feet, &d1.inches);

    // Input for the second distance
    printf("Enter feet and inches for the second distance: ");
    scanf("%d %f", &d2.feet, &d2.inches);

    // Call the function to add the two distances
    result = addDistances(d1, d2);

    // Display the result
    printf("Sum of distances = %d feet %.2f inches\n", result.feet, result.inches);

    return 0;
}
