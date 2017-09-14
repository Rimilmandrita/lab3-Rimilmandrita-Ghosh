#include <iostream>
using namespace std;

int main() {
int num,sum=0,dig;
cout<<"Enter any number.";
cin>>num;
while(num>0)
{
dig=num%10;
sum+=dig;
num=num/10;
}
cout<<"\nThe sum of digits is "<<sum;

	return 0;
}
