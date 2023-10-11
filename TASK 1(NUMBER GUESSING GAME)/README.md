
# Number Guessing Game

This is a Number Guessing Game implemented in C++. 

## Description

Welcome to the Number Guessing Game! In this game, the program generates a random number between a specified range, and you need to guess the correct number within the fewest attempts possible. The program will provide feedback on whether your guess is too high or too low.

## How to Play

1. Clone or download the repository to your local machine.

2. Compile the program using a C++ compiler. For example, using g++:

   g++ number_guessing_game.cpp -o number_guessing_game
  

3. Run the program:

   ./number_guessing_game
 

4. The game will provide you with a range of numbers, and you need to guess the correct number within that range.

5. Enter your guesses, and the program will tell you whether your guess is too high, too low, or correct.

6. Keep guessing until you find the correct number. The program will keep track of your attempts.

7. When you guess the correct number, the program will congratulate you and display the number of attempts it took.

## Example

Here's an example of the game in action:

```
Welcome to the Number Guessing Game!
  _______        Attempts: 0
 /       \      Enter your guess: 50
 | o   o |       
Too high! Try again.
  \  ~  /        ----------------
    ---

  _______        Attempts: 1
 /       \      Enter your guess: 25
 | o   o |       
Too low! Try again.
  \  ~  /        ----------------
    ---

  _______        Attempts: 2
 /       \      Enter your guess: 37
 | o   o |       
Congratulations!
You've guessed the correct number (37) in 3 attempts.
  \  ~  /        ----------------
    ---
=