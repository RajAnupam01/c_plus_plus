// linear search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int length, int target){

for(int i=0; i<length; i++){
    if(arr[i]== target){
        return i;
    }
}
return -1;
}


int main(){

int arr[] = {23,45,56,62,12,87};
int length = sizeof(arr)/ sizeof(arr[0]);
int target = 62;

int result = linearSearch(arr,length,target);
cout<<result;
return 0;

}