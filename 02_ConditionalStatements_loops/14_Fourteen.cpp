// sum of all odd numbers from 1 to N using while loop

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i=0;
    int sum = 0;
    while(i<=n){
        if(i%2!=0){
            sum += i;
        }
        i+=1;
    }
    cout<<sum;
    return 0;
}