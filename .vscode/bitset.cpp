#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Convert Decimal to Binary" << endl;
    cout << "2. Convert Binary to Decimal" << endl;
    cin >> choice;

    if (choice == 1) {
        // Decimal to Binary
        int decimal;
        cout << "Enter a decimal number: ";
        cin >> decimal;

        bitset<32> binary(decimal); // Assuming 32-bit integer
        cout << "Binary representation: " << binary << endl;
    } else if (choice == 2) {
        // Binary to Decimal
        string binaryString;
        cout << "Enter a binary number: ";
        cin >> binaryString;

        bitset<32> binary(binaryString); // Assuming 32-bit binary number
        int decimal = static_cast<int>(binary.to_ulong());
        cout << "Decimal representation: " << decimal << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
