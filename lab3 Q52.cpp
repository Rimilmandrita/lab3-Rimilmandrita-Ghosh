#include <iostream>
using namespace std;

int main()
{
  int  num, i, n, digit, sum;
cout << "Enter any number. ";
  cin >> num;

  cout << "\nArmstrong numbers between 1 and " << num << " are: " << endl;
  for(i = 1; i <= num; i++)
  {
        sum = 0;
        n = i;

       while(n>0)
        {
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n=n/10;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}
