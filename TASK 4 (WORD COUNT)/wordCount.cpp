#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    string fileName;
    cout << "------------------------------------------" << endl;
    cout << "    Welcome to the Word Count Program    " << endl;
    cout << "------------------------------------------" << endl;
    cout << "Enter the name of the text file: ";
    cin >> fileName;

    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Failed to open the file. Please check the file name." << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    while (inputFile >> word) {
        // Remove punctuation and special characters
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

        if (!word.empty()) {
            wordCount++;
        }
    }

    cout << "------------------------------------------" << endl;
    cout << "Total word count in the file: " << wordCount << endl;
    cout << "------------------------------------------" << endl;
    inputFile.close();

    cout << "Thank you for using the Word Count Program!" << endl;

    return 0;
}
