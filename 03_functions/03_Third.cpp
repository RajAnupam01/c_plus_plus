// find minimum of two numbers

#include <iostream>
using namespace std;
int min_Two_Num(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int b;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"The minimum of " <<a<< " and " <<b<<" is: " << min_Two_Num(a,b) <<endl;
    return 0;
}