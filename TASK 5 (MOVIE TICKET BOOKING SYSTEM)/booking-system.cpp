#include <iostream>
#include <vector>

using namespace std;

// Constants
const int numRows = 5;
const int numCols = 5;
const double ticketPrice = 10.0;

// Function to display the seating arrangement
void displaySeats(vector<vector<char>> &seats) {
    cout << "==============================" << endl;
    cout << "  Welcome to the Movie Theater" << endl;
    cout << "==============================" << endl;
    cout << "  A B C D E" << endl;
    for (int i = 0; i < numRows; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < numCols; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the total cost
double calculateTotalCost(vector<vector<char>> &seats) {
    double totalCost = 0.0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (seats[i][j] == 'X') {
                totalCost += ticketPrice;
            }
        }
    }
    return totalCost;
}

int main() {
    vector<vector<char>> seats(numRows, vector<char>(numCols, 'O'));

    cout << "Welcome to the Movie Ticket Booking System!" << endl;

    while (true) {
        int row, col;
        displaySeats(seats);
        cout << "Enter the row and column (e.g., 1 3) or -1 to exit: ";
        cin >> row;

        if (row == -1) {
            break;
        }

        cin >> col;

        if (row < 1 || row > numRows || col < 1 || col > numCols) {
            cout << "Invalid row or column. Please try again." << endl;
        } else if (seats[row - 1][col - 1] == 'X') {
            cout << "Seat already booked. Please select another seat." << endl;
        } else {
            seats[row - 1][col - 1] = 'X';
            cout << "Seat booked successfully!" << endl;
        }
    }

    double totalCost = calculateTotalCost(seats);
    cout << "==============================" << endl;
    cout << "Total cost for booked seats: $" << totalCost << endl;
    cout << "==============================" << endl;

    cout << "Thank you for using the Movie Ticket Booking System!" << endl;

    return 0;
}
