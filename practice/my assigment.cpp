#include <iostream>
using namespace std;

int sumOfEvenDigits(int total, int newnumber) {
    int sum = total + newnumber;
    return sum;
}

int main() {
    int idNumber = 230403530;
    int currentNumber;
    int sum = 0;

    cout << "Student ID: (BC230403530)\n";
    cout << "Digital part of the student ID is: 230403530\n";

    while (idNumber > 0) {
        currentNumber = idNumber % 10;
        idNumber = idNumber / 10; 
        if (currentNumber % 2 == 0 && currentNumber != 0) {
            cout << currentNumber;
            sum = sumOfEvenDigits(sum, currentNumber); 
        }
    }

    cout << "\nSum of even digits: " << sum << endl;

    
}

