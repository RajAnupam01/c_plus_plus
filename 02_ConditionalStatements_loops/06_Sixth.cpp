// Ternary operator
// condition? statment_one : statement_two

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the value of num:";
    cin>>num;
    cout<<(num >=0 ?"Positive":"Negative")<<endl;
    return 0;
}