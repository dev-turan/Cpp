#include <iostream>

using namespace std;

int main()
{
    // int x = 5;
    // int y =6;
    // if(x>y){
    //     cout<<"yes"<<endl;
    // }else{
    //     cout<<"no"<<endl;
    // }

    string a, b;
    cin >> a;
    cin >> b;
    if (a[0] == b[0])
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}