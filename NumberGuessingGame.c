#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void numguess() {
    char answer;
    do {
        printf("Hi! Welcome to the number guessing game. I've picked a number between 1 and 100. Can you figure it out with your guesses? You have 10 guesses. Let's get started!\n");
        int guess, counter = 1;
        srand(time(0)); // Seed the random number generator with the current time.
        int number = 1 + rand() % 100; // Generate a random number between 1 and 100.

        // Loop that allows the player to guess up to 10 times.
        while (counter<11) {
            printf("Guess #%d: ", counter);
            scanf("%d", &guess); // Read the player's guess.

            // Check if the guess is correct.
            if (guess == number) {
                printf("You got it!\n"); // Inform the player they guessed correctly.
                break; // Exit the loop since the game is won.
            }
            else if (guess > number) {
                printf("DOWN\n"); // Inform the player to guess lower.
                counter++; // Increment the guess counter.
            }
            else if (guess < number) {
                printf("UP\n"); // Inform the player to guess higher.
                counter++; // Increment the guess counter.
            }
        }

        // Inform the player if they have run out of guesses.
        if (counter == 11) {
            printf("Sorry, you've used all your guesses. The number was %d.\n", number);
        }

        // Prompt the player to decide whether to play again.
        printf("\nDo you want to play again? (Y/N)\n");
        scanf(" %c",&answer); // Added a space before %c to consume any leftover newline characters.
    }while (answer == 'y' || answer == 'Y'); // Continue playing if the answer is 'y' or 'Y'.
}


int main()
{
    numguess(); // Call the number guessing function.
    return 0; // Return 0 to indicate successful completion of the program.
}
