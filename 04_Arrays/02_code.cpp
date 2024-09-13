#include <iostream>
using namespace std;
int main(){
    // size of element
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    // putting the value of size
    int marks[size];

    // input elments in array
    for(int i=0; i<size; i++){
        cout<<"Enter the value of the element "<<i+1<<": ";
        cin>>marks[i];
    }

    // printing elements of array
    for(int i=0; i<size; i++){
        cout<<marks[i]<<endl;
    }

}