#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age:";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to Vote!"<<endl;
    }
    else{
        cout<<"You are not eligbile to Vote!"<<endl;
    }

    return 0;
}