// sum of two numbers using function

#include <iostream>
using namespace std;

int sum(int a, int b){
    int s = a+b;
    return s;
}

int main(){
    cout<<"The sum of a and b:"<<sum(10,5) <<endl;
    return 0;
}