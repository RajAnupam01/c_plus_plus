// reverse array in using reverse pointer

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){

int front = 0;
int back = size-1;

while (front<back){
    
    swap(arr[front],arr[back]);
    front++;
    back--;
}

}

int main(){

    int size;
    cout<<"enter the length of the array : ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array before reversing : " <<endl;

    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }

    cout<<endl;

    reverseArray(arr,size);

    cout<<"Array after reversing : "<<endl;
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}