// Maths - Decimal Number System base10 it consist from 0-9 e.go 124529l
//Computer - Binary number System  base2 it consists of only 1 and 2 e.g. 1101001

// converting Decimal to binary System
/*

e.g. 42   2 | 42 |  0
          2 | 21 |  1
          2 | 10 |  0  
          2 | 5  |  1
          2 | 2  |  0
          2 | 1  |  1        
            | 0  |

       (42)      ->   (101010)
           10                 2

e.g. 50   2 | 50 | 0
          2 | 25 | 1
          2 | 12 | 0
          2 | 6  | 0
          2 | 3  | 1
          2 | 1  | 1
            | 0  |

        (50)      ->  (110010)
            10                2

*/

#include <iostream>
using namespace std;
int decimal_to_binary(int n){
    int ans = 0;
    int pow = 1;
    while (n> 0){
       int  rem = n % 2;
        n = n/2;

        ans = ans + (rem * pow);
        pow = pow * 10;

    }
    
    return ans;
}
int main(){
    int n;
    cout<<"enter the value of n:" ;
    cin >> n;
    int result = decimal_to_binary(n);
    cout << result;
    return 0;
}

