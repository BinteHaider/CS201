#include <iostream>
using namespace std;
int sum = 0;
void sumOfEvenDigits(int num) {
    cout << "Even digits: ";
    while (num > 0) {
        int digit = num % 10;
        num /= 10;
        if (digit % 2 == 0) {
            sum = sum + digit;
            cout << digit << " ";
        }
    }
    cout << endl;
}
// Main function
int main() {
    cout << "Student ID:BC123456789\n";
    cout << "Digital part of the Student ID is: 123456789\n";
    int originalNumber = 123456789;
    sumOfEvenDigits(originalNumber);
    cout << "Sum of even Digits is: " << sum << endl;
    return 0;
}