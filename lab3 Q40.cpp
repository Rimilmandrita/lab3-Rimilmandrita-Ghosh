#include <iostream>
using namespace std;

int main()
{
char a[10][10]={"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};

char b[10][10]={"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN",
"SEVENTEEN","EIGHTEEN","NINTEEN"};

char c[10][10]={"TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY",
"EIGHTY","NINTY"};
int no,t;
cout<<" Enter any positive number(max 4 digits).\n";
cin>>no;

if(no<9999 && no>0)

{
 if(no>1000)
{
t=no/1000;
no=no%1000;
cout<< a[t-1]<< " THOUSAND";
}
 if(no>100)
{
t=no/100;
 no=no%100;
cout<<" "<<a[t-1]<<" HUNDRED AND";
 }
if(no>=10 && no<20)
{
t=no/10;
cout<<" "<<b[t-1];
}
if(no>19 && no<=100)
 {
t=no/10;
no=no%10;
cout<<" "<<c[t-1];
 }
if(no<10)
 {
 cout<<" "<<a[no-1];
 }
}


return 0;

}

	
