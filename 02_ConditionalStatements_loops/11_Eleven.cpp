// continue statement
#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<10; i++){
        if(i==5){
            continue;// 5 will not be printed
        }
         cout<<i<<endl;
    }
    return 0;
}