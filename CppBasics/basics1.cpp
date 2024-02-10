#include<iostream>
using namespace std;  // declaring std above so that we dont have to use it again and again for print
int main() {
    // ** output in cpp **//
    // cout << "Hello world";

    // ** endl used to print in next line **//
    // cout << "Hello world \n";    // using \n fpr next line
    // cout << "hello world \n\n";  // double \n will add a blank line
    // cout<<"hello world"<<endl;   // using endl for next line

    // ** important ** //
    //  cout << "Hello World!\t";             // \t used for horizontal spaceing
    //  cout << "I am learning C++ \n";
    //  cout << "They call him \"Johnny\". \n";  // \ used tp insert "" sentences
    //  cout << "Hello World!\\";             // using two \\ to inser a single \   //
    //  cout << "I am learning C++";

    // ** declaring variables **//
    // int a = 9;
    // int _a = 9;
    // int a123 = 9;
    // int a_12 = 9;
    // int a12b = 9;
    // cout << a << _a << a123 << a_12 << a12b ;

    // **different datatypes ** //
    // short a = 12;
    // int b = 1234;
    // long c = 123456;
    // long long d = 2345654321; 
    // float e = 3.2;
    // double f = 3.22;
    // long double g = 3.222;

    // cout << a << b << c << d << e << f << g ;

    // ** changing the variable value ** //
    // int a = 2;
    // a =3;
    // cout << a;

    //** keeping varable value constant **//
    // int const b = 3;
    // b = 4;    // doesn't work
    // cout<<b;

    //** input from user **//
    // int a,b;
    // cout<<"enter a: "<<endl;
    // cin >> a;
    // cout<<"enter b: "<<endl;
    // cin >> b;

    // cout<<"the sum is: "<<a+b<<endl;
    // cout<<"the subtraction is: "<<a-b<<endl;
    // cout<<"the multiplication is: "<<a*b<<endl;
    // cout<<"the division is: "<<(float) a/b <<endl; // this is called typecasting

    return 0;
}