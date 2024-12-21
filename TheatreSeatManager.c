#include <stdio.h>

// Constants for seat dimensions
#define ROW 5
#define COL 5

// Enum to represent seat status
enum SeatStatus { Available, Booked };

// Global seat chart
int SeatChart[ROW][COL];

// Function to validate and return a seat number
int seatcontrol() {
    int seat;
    while (1) {
        scanf("%d", &seat);
        if (seat < 1 || seat > ROW) { // Validate seat number is between 1 and ROW
            printf("Invalid seat number. Choose a seat (1 to %d).\n", ROW);
        } else {
            return seat;
        }
    }
}

// Function to handle seat booking, cancellation, and display
void theatreseat() {
    // Initialize all seats as available
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            SeatChart[i][j] = Available;
        }
    }

    while (1) {
        // Display menu
        printf("\nMENU\n1 - Show Availability\n2 - Book a Seat\n3 - Cancel a Booking\n4 - Exit\n");
        char choice;
        scanf(" %c", &choice);

        if (choice == '1') {
            // Display seat availability
            printf("\nSeat Chart:\n");
            for (int i = 0; i < ROW; i++) {
                for (int j = 0; j < COL; j++) {
                    printf("%d ", SeatChart[i][j]);
                }
                printf("\n");
            }
        } else if (choice == '2') {
            // Book a seat
            int seatr, seatc;
            printf("Enter the row (1 to %d): ", ROW);
            seatr = seatcontrol();
            printf("Enter the column (1 to %d): ", COL);
            seatc = seatcontrol();

            if (SeatChart[seatr - 1][seatc - 1] == Available) {
                SeatChart[seatr - 1][seatc - 1] = Booked;
                printf("Seat %d-%d has been booked.\n", seatr, seatc);
            } else {
                printf("Seat %d-%d is already booked. Please choose another seat.\n", seatr, seatc);
            }
        } else if (choice == '3') {
            // Cancel a booking
            int seatr, seatc;
            printf("Enter the row (1 to %d): ", ROW);
            seatr = seatcontrol();
            printf("Enter the column (1 to %d): ", COL);
            seatc = seatcontrol();

            if (SeatChart[seatr - 1][seatc - 1] == Booked) {
                SeatChart[seatr - 1][seatc - 1] = Available;
                printf("Seat %d-%d booking has been canceled.\n", seatr, seatc);
            } else {
                printf("Seat %d-%d is not booked. No cancellation needed.\n", seatr, seatc);
            }
        } else if (choice == '4') {
            // Exit the program
            printf("Exiting...\n");
            break;
        } else {
            // Handle invalid menu input
            printf("Invalid choice. Please try again.\n");
        }
    }
}

// Entry point of the program
int main() {
    theatreseat();
    return 0;
}
