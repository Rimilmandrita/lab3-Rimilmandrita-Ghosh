#include <iostream>
using namespace std;

int main() {
int num,prod=1,dig;
cout<<"Enter any number.";
cin>>num;
while(num>0)
{
dig=num%10;
prod*=dig;
num=num/10;
}
cout<<"\nThe product of digits is "<<prod;

	return 0;
}
