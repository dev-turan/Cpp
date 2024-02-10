#include <iostream>

using namespace std;

int main()
{
    // int a = 0;
    // while (a < 10)
    // {
    //     cout << a << endl;
    //     a++;
    //     if (a == 4)
    //     {
    //         break;
    //     }
    // }

    int a =0;
    while(a<10){
        if(a==4){
            a++;
            continue;
        }
        cout<<a<<endl;
        a++;
    }

    return 0;
}