// converting binary number to decimal number
/*
    e.g. 101010

           5        4      3       2       1       0                                 
        1X2   +  0X2  + 1X2  +  0X2  +  1X2  +  0X2
 
        32 + 0 + 8 + 0 + 2 + 0 = 42


*/


#include <iostream>
using namespace std;

int binary_to_decimal(int n){
    int ans =0; 
    int pow = 1;
    while(n>0){
        int rem = n % 10;
        ans += rem * pow;

        n = n/ 10;
        pow = pow * 2;
    }
        
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int result = binary_to_decimal(n);
    cout<<result;
    return 0;
}