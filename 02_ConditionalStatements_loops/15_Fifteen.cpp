// check whether a number is prime or not.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the value of num:";
    cin>>num;
    if(num==1){
        cout<<"1 in Neither prime nor composite."<<endl;
        return 0;
    }
    bool isPrime = true;
    for(int i=2; i<num; i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime Number"<<endl;
    }
    return 0;
}
