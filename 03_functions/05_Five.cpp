// calcualte Factorial
#include <iostream>
using namespace std;

int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;
    return 0;
}

