#include <iostream>



using namespace std;
int main(){
    cout << " ASCII CODE TABLE" << endl;
    cout << "=================" << endl;
    cout << "| char  | ASCII |" << endl;
    cout << "=================" << endl;
    for(int i = 0; i<128 ;i++){
        cout << "|  " <<  char(i)  << "     |" << "   "<<  i  << "      |"<< endl;
    }



    return 0;
}