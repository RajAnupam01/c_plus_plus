// Type casting
#include <iostream>
using namespace std;
int main(){
    // implicit conversion : from small datatype to big datatype
    char grade = 'A';
    int value = grade;
    cout << value <<endl;

    // Explicit conversion : from big datatype to small datatype
    double marks = 108.343;
    int value2 = marks;
    cout<< value2 <<endl; 


    return 0;
}