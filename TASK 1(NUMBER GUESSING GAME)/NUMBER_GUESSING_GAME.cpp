#include <iostream>
#include <cstdlib>
#include <ctime>
//Eman Code
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int lowerBound = 1;
    int upperBound = 100;
    int secretNumber = (rand() % (upperBound - lowerBound + 1)) + lowerBound;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        // Text-based visualization
        cout << "  _______        " << "Attempts: " << attempts << endl;
        cout << " /       \\      " << "Enter your guess: ";
        cin >> guess;
        cout << " | o   o |       ";
        attempts++;

        if (guess < secretNumber) 
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        } else 
        {
            cout << "Congratulations!" << endl;
            cout << "You've guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << endl;
        }
        
        cout << "  \\  ~  /        " << "----------------" << endl;
        cout << "    ---" << endl;
    } 
      while (guess != secretNumber);
    
    return 0;
}