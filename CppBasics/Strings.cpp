#include<iostream> // input output librabry
#include<string>  // string library

using namespace std;

int main(){
    string a = "Dev";  // declaring string
    cout<<a<<endl;

    // The + operator can be used between strings to add them together to make a new string. 
    // This is called concatenation
    string firstName = "dev ";
    string lastName = "turan";
    string fullName = firstName + lastName;
    cout << fullName<<endl;

    /*A string in C++ is actually an object, which contain functions that can perform certain operations on strings. 
      For example, you can also concatenate strings with the append() function: */
      string dev = "dev";
      string turan = "turan";
      string name = dev.append(turan);
      cout<<name<<endl;

    //To get the length of a string, use the length() or size() function
    cout<<fullName.size()<<endl;
    cout<<name.length()<<endl;

    // You can access the characters in a string by referring to its index number inside square brackets []
    cout<<fullName[0]<<endl;
    cout<<name[3]<<endl;

    //To change the value of a specific character in a string, refer to the index number, and use single quotes ''
    string fruit = "orange";
    fruit[2]='t';
    cout<<fruit<<endl;

    // input a word from the user
    // string juice;
    // cin>>juice;
    // cout<<juice<<endl;

    // input a line from user
    string school;
    getline (cin,school);
    cout<<school<<endl;







    return 0;
}