// sum of all odd numbers from 1 to N
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i=i+2){
        sum += i;
    }
    cout<<sum;
    return 0;
}