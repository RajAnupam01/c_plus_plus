// calculate sum of digits of a number

#include <iostream>
using namespace std;

int sum_of_digits(int n){
    int rem = 0;
    int sum = 0;
    while(n>0){
        rem = n % 10;   
        sum = sum + rem;
        n = n/10;
    }
    return sum;
}
int main(){
    int n = 145;
    int result = sum_of_digits(n);
    cout<<result<<endl;
    return 0;
}