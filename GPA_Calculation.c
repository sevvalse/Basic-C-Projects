#include <stdio.h>

// Function to calculate GPA based on midterm and final scores
int gpa(int midterm, int final) {
    // Calculate GPA using weighted average (40% midterm, 60% final)
    return ((midterm * 40) + (final * 60)) / 100;
}


void main(void)
{
    int midterm, final; // Variables to store midterm and final scores
    while (1) { // Infinite loop to allow continuous input
        printf("Your Midterm Result (or -1 to exit):");
        scanf("%d", &midterm); // Prompt user for midterm score
        if (midterm == -1) { // Check if user wants to exit
            printf("Exiting...\n");
            break; // Exit the loop if user inputs -1
        }
        if (midterm < 0 || midterm > 100) { // Validate midterm score
            printf("Please enter a number between 0 and 100!\n");
            continue; // If invalid, prompt again for midterm score
        }
        while (1) { // Inner loop for final score input
            printf("Your Final Result:");
            scanf("%d", &final); // Prompt user for final score
            if (final >= 0 && final <= 100) { // Validate final score
                break; // Exit inner loop if valid
            }
            else {
                printf("Please enter a number between 0 and 100!\n"); // Error message for invalid input
            }
        }
        // Calculate and display the GPA based on the valid midterm and final scores
        printf("Your GPA is: %d\n", gpa(midterm, final));
    }
}
