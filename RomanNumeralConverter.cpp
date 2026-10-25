// Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number.

// Input Validation : Decide how the program should handle an input that is less than 1 or greater than 10.

#include <iostream>

using namespace std;

int main() {
    int number;

    // Ask the user to enter a number within the range of 1 through 10
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    // Implement a switch statement to display the Roman numeral version
    switch (number) {
    case 1:
        cout << "The Roman numeral is: I" << endl;
        break;
    case 2:
        cout << "The Roman numeral is: II" << endl;
        break;
    case 3:
        cout << "The Roman numeral is: III" << endl;
        break;
    case 4:
        cout << "The Roman numeral is: IV" << endl;
        break;
    case 5:
        cout << "The Roman numeral is: V" << endl;
        break;
    case 6:
        cout << "The Roman numeral is: VI" << endl;
        break;
    case 7:
        cout << "The Roman numeral is: VII" << endl;
        break;
    case 8:
        cout << "The Roman numeral is: VIII" << endl;
        break;
    case 9:
        cout << "The Roman numeral is: IX" << endl;
        break;
    case 10:
        cout << "The Roman numeral is: X" << endl;
        break;
    default:
        // Input Validation: Handle numbers less than 1 or greater than 10
        cout << "Error: Please enter a number in the range of 1 through 10." << endl;
        break;
    }

    return 0;
}