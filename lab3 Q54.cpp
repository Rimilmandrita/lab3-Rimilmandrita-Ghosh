#include <iostream>
using namespace std;

int main() {
	
    int num, i, Sum, j;
   cout<<"Enter a number\n";
   cin>>num;
  cout<<"The perfect numbers between 1 & "<<num<<" are-\n";
    for(j= 1; j <= num;j++)
    {
        Sum = 0;
        for (i = 1; i <= j/2; i++)
        {
            if (j % i == 0)
            {
                Sum += i;
            }
        }
      
        if (Sum == j)
           cout<<j<<" ";
         
    }
	return 0;
}
