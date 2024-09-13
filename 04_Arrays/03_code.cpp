// find smallest and largest number in array
#include <iostream>
using namespace std;
int main(){
    int arr[6] = {5,15,22,1,-15,24};
    int smallest = arr[0];
    int largest  = arr[0];
    for(int i=0; i<6; i++){
        if(arr[i]<smallest){
             smallest = arr[i];
        }
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The smallest number in the array is: "<<smallest<<endl;
    cout<<"The smallest number in the array is: "<<largest<<endl;

    // min and max function
    // cout<<min(15,23)<<endl;
    // cout<<max(24,22)<<endl;



    return 0;
}