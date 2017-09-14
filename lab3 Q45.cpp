#include <iostream>
using namespace std;
int main()
{
    int a,b, i;

    cout << "Enter two positive integer. ";
    cin >> a>>b;
    while(a != b)
    {
        if(a> b)
            a -= b;
        else
            b -= a;
    }

    cout << "\nHCF = " << a;


    return 0;

}
