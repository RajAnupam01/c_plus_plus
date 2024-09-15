/*

1 2 3
4 5 6
7 8 9

*/
#include <iostream>
int main(){
    int n;
    std::cout << "enter the value of n:";
    std::cin >> n;
    int digit = 1;
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){
            std::cout<<digit<< " ";
            digit++;
        }
        std::cout<<std::endl;
    }
    return 0;
}