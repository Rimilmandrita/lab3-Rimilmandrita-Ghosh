#include <iostream>
using namespace std;

int main() {
int N, num, temp, dig,i, prod, factSum;
     
    cout<<"To find all strong numbers between 1 to N";
    cout<<"\nEnter value of N";
    cin>>N;
    cout<<"\nList of strong numbers between 1 to "<< N<<" is-\n";
    for(num = 1; num <= N; num++)
    {
       temp = num;
       factSum = 0;
       
        while(temp){
           dig = temp%10;   
           prod=1;
      for( i=dig;i>=1;i--)
   { 
     prod=prod*i;
      }
   factSum=factSum+prod;
     temp=temp/10;
        }
         if(factSum == num)
           cout<<num<<" ";
    
    }
    
    return 0;
}	
