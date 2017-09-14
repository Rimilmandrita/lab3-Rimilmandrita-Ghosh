#include <iostream>
using namespace std;
int main()
{
    int a,prime=0;

    cout << "Enter a positive integer. ";
    cin >> a;
    for(int i=a-1;i>1;i--)
    { if(a%i==0)
       { prime++;
       }
    }
   if(prime==0)
   {
   	cout<<"\nThe number is a prime.";
    }
    else
    cout<<"\nThe number is not a prime.";
return 0;

}
