#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    int num;
    int decimalNumber = 0, i = 0, remainder;
    cout << "Enter a binary number: \n";
    cin >> n;
    num=n;
     while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    cout << num << " in binary = " << decimalNumber << " in decimal";
   return 0;
}
