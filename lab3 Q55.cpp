#include <iostream>
using namespace std;

int main() {
int i,num, num2,sum=0,dig, prod;
cout<<"Enter any number.";
cin>>num;
num2=num;
while(num>0)
{    
    prod=1;
    dig=num%10;
    while(dig>=1)
   { 
     prod=prod*dig;
      dig--;
   }
  sum=sum+prod;
   num=num/10;
}
 if(sum==num2)
 cout<<"\nIt is a strong number.";
 else
 cout<<"\nIt is not a strong number.";
 return 0;
}
