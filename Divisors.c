#include <stdio.h>

void divisors(){
    // This function takes a number as input from the user and prints all its divisors.
    int number, i;
    // Get the number from the user.
    scanf("%d", &number);
    // Loop through all numbers from 1 to the input number.
    for (i = 1; i<=number; i++) {
        // If the number is divisible by the current loop counter, it is a divisor.
        if (number%i==0) {
            printf("%d ",i);
        }
    }
}

int main() {
    // Call the divisors function to get the divisors of a number.
    divisors();
    // Return 0 to indicate successful execution.
    return 0;
}