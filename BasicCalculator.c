#include <stdio.h>

void myCalculator() {
    int choice, number1, number2, result;

    while (1) { // Infinite loop, continues until the user exits.
        // Displays the menu options to the user.
        printf("\nHi! Please choose a menu.\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n5 - Exit\nMenu choice:");
        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number between 1 - 5");
            while (getchar() != '\n');
            continue; // If invalid input, go back to the start of the loop.
        }

        // If the selection is not a valid menu number, it gives a warning.
        if (choice < 1 || choice > 5) {
            printf("Please enter a valid menu number (between 1 and 5)!"); // If invalid menu number, go back to the start of the loop.
        }else if(choice == 1) {
            printf("Please enter two numbers:");
            scanf("%d %d", &number1, &number2);
            result = number1 + number2;
            printf("%d + %d = %d", number1, number2, result);
        }else if(choice == 2) {
            printf("Please enter two numbers:");
            scanf("%d %d", &number1, &number2);
            result = number1 - number2;
            printf("%d - %d = %d", number1, number2, result);
        }else if(choice == 3) {
            printf("Please enter two numbers:");
            scanf("%d %d", &number1, &number2);
            result = number1 * number2;
            printf("%d * %d = %d", number1, number2, result);
        }else if(choice == 4) {
            printf("Please enter two numbers:");
            scanf("%d %d", &number1, &number2);
            if(number2 == 0) { // Checks for division by zero.
                printf("Divisor cannot be zero!");
                continue; // If division by zero, go back to the start of the loop.
            }
            result = number1 / number2;
            printf("%d / %d = %d", number1, number2, result);
        }else if(choice == 5) {
            printf("Goodbye!");
            break; // Exits the loop.
        }
    }
}


int main() {
    myCalculator();
    return 0;
}
