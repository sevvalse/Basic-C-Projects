#include <stdio.h>

void atm() {
    int choice, money = 1000, deposit, withdraw;

    while (1) {
        printf("\n1-Check amount\n2-Deposit\n3-Withdraw\n4-Exit\nEnter Choice:");
        // Get user input for the choice
        scanf("%d", &choice);
        // If the input is not a number, prompt the user to enter a number between 1 and 5
        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number between 1 - 5");
            while (getchar() != '\n');
            continue; // If invalid input, go back to the start of the loop.
            }
        // Check user choice
        if(choice == 1) {
            // Print the current amount
            printf("Current amount: %d", money);
            continue;
            }
        if(choice == 2) {
            // Get the deposit amount
            scanf("%d", &deposit);
            // Update the amount
            money = money + deposit;
            // Print the current amount
            printf("Current amount: %d", money);
            continue;
            }
        if(choice == 3) {
            // Get the withdraw amount
            scanf("%d", &withdraw);
            // Update the amount
            money = money - withdraw;
            // Print the current amount
            printf("Current amount: %d", money);
            continue;
            }
        if(choice == 4) {
            // Exit the ATM system
            printf("Goodbye!\n");
            break;
        }
    }

}

void main()
{
    atm();
}
