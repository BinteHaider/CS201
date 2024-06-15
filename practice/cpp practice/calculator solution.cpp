#include <iostream>


using namespace std;

int main() {
    

  
    char cont;
cout << "\nHello Ali,  Student Id=BC123456789"<< " Welcome to the Main Menu\n" << endl;
    do {
        int Choice, numCount;
        double num, result=0;

        // Display calculator menu options
        
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> Choice;

        // Perform operations based on user choice
        switch (Choice) {
            case 1:
                // Addition
                cout << "How many numbers do you want to add? ";
                cin >> numCount;
               result = 0; // Initialize result to zero
                for (int i = 0; i < numCount; ++i) {
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> num;
                    result += num; // Add the number to the result
                }
                cout << "Result of addition: " << result << endl;
                break;
            case 2:
                // Subtraction
                cout << "How many numbers do you want to subtract? ";
                cin >> numCount;
               
                for (int i = 0; i < numCount; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        if (i == 0) {
            result = num; // For the first number, set result to that number
        } else {
            result -= num; // For subsequent numbers, subtract from the previous result
        }
    }
                cout << "Result of subtraction: " << result << endl;
                break;
            case 3:
                // Multiplication
                cout << "How many numbers do you want to multiply? ";
                cin >> numCount;
                result = 1; // Initialize result to 1 for multiplication
                for (int i = 0; i < numCount; ++i) {
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> num;
                    result *= num; // Multiply the number with the result
                }
                cout << "Result of multiplication: " << result << endl;
                break;
            case 4:
                // Division
                
                
               cout << "How many numbers do you want to divide? ";
    cin >> numCount;

    cout << "Enter number 1: ";
    cin >> result; // Initialize result with the first number

    for (int i = 1; i < numCount; ++i) { // Start from 1 as we've already entered the first number
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        if (num != 0) {
            result /= num; // Divide the result by the number
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1; // Exit the program with an error code
        }
    }
                cout << "Result of division: " << result << endl;
                break;
            case 5:
                // Exit
                cout << "Exiting program. Thank you!" << endl;
                return 0;
            default:
                // Invalid choice
                cout << "Invalid choice. Please try again." << endl;
        }

        // Prompt user to continue or exit
        cout << "Do you want to continue (y/n)? ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;
}

