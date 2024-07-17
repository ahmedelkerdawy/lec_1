#include <iostream>
using namespace std;

int main() {
    char vo_char[] = {'a', 'o', 'i', 'e', 'u', 'A', 'O', 'I', 'U', 'E'};
    char ch;
    bool _Vowel = false;

    cout << "Enter the character: " << endl;
    cin >> ch;

    for(int i = 0; i <= 9; i++) {
        if(ch == vo_char[i]) {
            _Vowel = true;
            break;
        }
    }

    if(_Vowel) {
        cout << "The letter is a vowel." << endl;
    } else {
        cout << "The letter is not a vowel." << endl;
    }

    return 0;
}
