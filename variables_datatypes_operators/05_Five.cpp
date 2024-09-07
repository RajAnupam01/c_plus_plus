// Operators
#include <iostream>
using namespace std;

int main()
{
    // arithmetic operators

    int a = 10, b = 5;
    // int sum = a+b;
    cout << "The sum is:" << (a + b) << endl;
    cout << "The Differnce is:" << (a - b) << endl;
    cout << "The multiplication is:" << (a * b) << endl;
    cout << "The Division is:" << (a / b) << endl;
    cout << "The Modulous is;" << (a % b) << endl;

    // 5/2 => 2.5 but we will get 2 in cpp as division of int with int gives int
    // 10/3 => 3.33 but we will get 3 
    
    // to get answer in decimal then float/int or int/double  or int/float or int/double the result depends on bigger datatype

    int x= 5;
    double y = 2;

    cout << "The Divison is:" << (x/y) << endl;


    // Relational Operators // 1-true and 0-false , always return boolean values

    cout << (3<5) <<endl;
    cout << (3>5) <<endl;
    cout << (3<=3) <<endl;
    cout << (3>=3) <<endl;
    cout << (3==3) <<endl;
    cout << (3!=3) <<endl;

    // Logical operators i.e || (or) , && (and) , !(not)

    cout << ( (3<1) || (2>1)) <<endl;

    cout << ((3<1) && (2>1)) <<endl;

    // Binary operator -> perform operation using two numbers like a+b, a-b, a*b

    // unary operator
    // increment++
    // decrement--
    // a= a+1 or a++; or a+=1
    // a= a-1 or a--; or a-=1

    // preincrement or postincrement
    // ++a  first update, then do work
    // a++  first do work, then update

    int first = 10;
    int second = first++;

    cout << second <<endl;
    cout << first <<endl;


    int one = 10;
    int two = ++one;

    cout << one << endl;
    cout << two << endl;


    
    return 0;
} 