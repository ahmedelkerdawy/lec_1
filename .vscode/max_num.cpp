#include <iostream>

using namespace std;
int main(){
    int num1 , num2 ,num3;
    cout <<" enter three numbers " << endl;
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;

    if((num1 > num2) && (num1 > num3)){
        cout << "number " << num1 << " is greater"<<endl;
    }
    else if((num2 > num1) && (num2 > num3)){
        cout << "number " << num2 << " is greater"<<endl;
    }
    else{
        cout << "number " << num3 << " is greater"<<endl;
    }




    return 0;
}