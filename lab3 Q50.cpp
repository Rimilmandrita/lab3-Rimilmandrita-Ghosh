#include <iostream>
using namespace std;

int main()
{
    int num,  i;
 
    cout  <<  "Enter Any Number : ";
    cin >>  num;
    i  =  1;
    cout<<"\nThe prime factors of "<<num<<" are \n ";
    while(  i <=  num  )
    {
        if( num % i == 0 )
        {
            int j = 1, k = 0;
            while( j  <=  i)
            {
                if( i % j == 0 )
                k++;
                j++;
            }
            if( k == 2 )
            cout  <<  i  <<'\n';
            
        }
        i++;
    
}

    return 0;
}
