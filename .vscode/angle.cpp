#include <iostream>
using namespace std;
int rows;
int main() {
    int height;
    cout << "Enter the rows: ";
    cin >> rows;
    
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << " * ";
        }
        cout << endl;
    }
    
    return 0;
}