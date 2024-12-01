# Basic C Projects
 A collection of simple C projects created for learning and practicing basic programming concepts. Suitable for beginners looking to enhance their coding skills.

- **Basic ATM Application**
  * This program allows users to perform basic banking transactions through an ATM system. Initially the account balance is set to 1000. The user is presented with a menu and options include checking balance, depositing, withdrawing funds or shutting down the system. The user makes a selection and the program performs the action based on the selection. It updates the balance in deposit or withdrawal transactions and writes the current status to the screen. The loop continues until the user chooses to exit, when exit is selected the program says “Goodbye!” It ends with the message. A warning is given for incorrect entries and the user is expected to enter correctly.
    
  
- **Basic Calculator**
  * This program implements a simple calculator that allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division, or exit the program.
  * When the program runs, it continuously displays a menu of options to the user: Addition, Subtraction, Multiplication, Division, Exit.
  * The user selects an option by entering a number between 1 and 5. If the user chooses an arithmetic operation (1-4), they are prompted to input two numbers, and the program performs the selected operation, displaying the result. Division includes a special check to ensure the divisor is not zero, as division by zero is undefined. If the user selects "5," the program exits with a farewell message. Invalid inputs or menu selections result in appropriate error messages and prompt the user to try again. The program runs in an infinite loop until the user decides to exit.
  
- **Divisors**
  * This program determines and prints all the divisors of a given number entered by the user. When the program runs, the user is prompted to input an integer. The divisors function then iterates through all numbers from 1 to the entered number and checks if each one divides the input number without leaving a remainder. If the condition is satisfied, the current number is a divisor, and it is printed. The program continues this process until all possible divisors of the input number are found and displayed. Finally, the program terminates successfully.
  
- **GPA Calculator**
  * This program calculates a student's GPA (Grade Point Average) based on their midterm and final exam scores. The program runs in a loop, allowing the user to input scores repeatedly. The user is first prompted to enter their midterm score, and the program validates that the input is between 0 and 100. If the user enters -1, the program exits with a goodbye message. Once a valid midterm score is provided, the user is asked to enter their final exam score, which is also validated to ensure it falls between 0 and 100. Using a weighted formula (40% midterm, 60% final), the program calculates the GPA and displays the result. The process continues until the user decides to exit by entering -1 for the midterm score.

- **Number Guessing Game**
  * This program is a simple Number Guessing Game implemented in C. The game generates a random number between 1 and 100, and the player has 10 chances to guess it correctly. After each guess, the program provides feedback—"UP" if the guess is too low, "DOWN" if it's too high, and a success message if the number is guessed correctly. At the end of the game, the player can choose to replay by entering 'Y' or exit by entering 'N'.





