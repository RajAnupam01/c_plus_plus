// calculate the sum of numbers from 1 to n using while loop
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int sum=0;
    int i=0 ;
    while(i<=n){
        sum+=i;
        i+=1;
    }
    cout<<sum<<endl;
}