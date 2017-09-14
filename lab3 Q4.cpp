#include <iostream>
using namespace std;

int main() {
 int n;
          
           cout<<"\n Enter the Number.";
           cin>>n;
           if((n%5==0)&&(n%11==0))
            {
                   cout<<"\n Its Divisible by 5 and 11.";
            }
         else if(n%5==0)
           { cout<<"\n Its Divisible by 5 only."; 
           } 
         else if(n%11==0)
          {cout<<"\n Its Divisible by 11 only."; 
          }       
           else 
           {cout<<"\nIt is neither divisible by 5 nor 11.";
           	
           }
	return 0;
}
