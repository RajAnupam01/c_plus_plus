// sum of numbers from 1 to n
#include <iostream>
using namespace std;

int sum(int n){
    int sum_num=0;
    for(int i=0; i<=n; i++){
        sum_num = sum_num+ i;
    }

    return sum_num;
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int result = sum(n);
    cout<<result;
    return 0;
}