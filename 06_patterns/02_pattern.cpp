/*

A B C D
A B C D
A B C D
A B C D

*/
#include <iostream>
int main(){
    int n;
    std::cout<<"enter the value of n: ";
    std::cin>>n;

    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<n; j++){
            std::cout<<ch << " ";
            ch++;
        }
        std::cout<<std::endl;
    }
    return 0;
}