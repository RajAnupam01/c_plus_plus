/*

square pattern 

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>

int main(){

    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            std::cout<<j << " ";
        }
            std::cout<<  std::endl;
    }
    return 0;
}



