#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter an integer: ";
    cin >> number;

    
    while (number > 0) {
        int digit = number % 10;     // Extract the last digit
        sum += digit;            
        number /= 10;            
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
