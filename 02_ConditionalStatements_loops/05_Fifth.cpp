// find character lowercase or uppercase.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an English alphabet:" ;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"You have entered a uppercase letter" <<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"You have entered a lowercase letter" <<endl;
    }
    else{
        cout<<"Please enter a valid alphabet." <<endl;
    }
    return 0;
}
