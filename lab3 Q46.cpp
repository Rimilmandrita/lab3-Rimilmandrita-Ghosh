#include <iostream>
using namespace std;
int main()
{
    int a,b,A,B,hcf,lcm;

    cout << "Enter two positive integer. ";
    cin >> a>>b;
    A=a;
    B=b;
    while(a != b)
    {
        if(a> b)
            a -= b;
        else
            b -= a;
    }
    hcf=a;
   lcm=(A*B)/hcf;
    cout<<"\nThe lcm of "<<A<<" & "<<B<< " is "<<lcm;

return 0;

}
