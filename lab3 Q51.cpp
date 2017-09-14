#include <iostream>
using namespace std;

int main() {
int num, num2, sum = 0;
  cout << "Enter a positive  integer. ";
  cin >> num;

  num2 = num;

  while(num != 0)
  {
      int digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
  }

  if(sum == num2)
    cout << num2 << "\n is an Armstrong number.";
  else
    cout << num2 << "\n is not an Armstrong number.";

	return 0;
}
