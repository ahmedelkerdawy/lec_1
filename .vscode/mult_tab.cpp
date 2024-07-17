#include <iostream>

using namespace std;

int main(){
    auto x = 0;
    cout << "enter the number you want :" << endl;
    cin >> x;

    for(int i = 1; i <= 12 ; i++){
        cout << i << "  x  " << x << " = " << i*x << endl;
    }
    return 0;
}