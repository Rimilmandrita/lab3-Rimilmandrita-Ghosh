#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std; 
 
unsigned long HexToDec(char hex[]) {
  char *hexstr;
  int length = 0;
  const int base = 16;    
  unsigned long decnum = 0;
  int i;
  for (hexstr = hex; *hexstr != '\0'; hexstr++) {
      length++;
    }
  hexstr = hex;
  for (i = 0; *hexstr != '\0' && i < length; i++, hexstr++) {
     
      if (*hexstr >= 48 && *hexstr <= 57) {  
      	decnum += (((int)(*hexstr)) - 48) * pow(base, length - i - 1);
        }
      else if ((*hexstr >= 65 && *hexstr <= 70))  {  // is *hexstr Between A-F
          decnum += (((int)(*hexstr)) - 55) * pow(base, length - i - 1);
        }
      else if (*hexstr >= 97 && *hexstr <= 102) {  // is *hexstr Between a-f
          decnum += (((int)(*hexstr)) - 87) * pow(base, length - i - 1);
        }
      else {
          std::cout<<"Invalid Hexadecimal Number \n";
 
        }
    }
  return decnum;
}
 
int main() {
  unsigned long decnum;
  char hex[9];    
  std::cout<<" Enter 32-bit Hexadecimal Number : ";
  std::cin>>hex;
 
  decnum = HexToDec(hex);
  std::cout<<"\nValue in Decimal Number is "<<decnum<<"\n";
 return 0;
  
}
 
