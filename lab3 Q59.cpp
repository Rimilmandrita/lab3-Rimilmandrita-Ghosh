#include <stdio.h>  
#include <string.h> 
#include <iostream>
using namespace std;
int main() {
    char binaryNumber[100], onesComplement[100], twosComplement[100];
    int counter, error=0, digitCount, carry = 1;   
    cout<<"Enter a Binary Number\n";  
   cin>>binaryNumber;  
   digitCount = strlen(binaryNumber);
      for(counter=0; counter < digitCount; counter++) {  
        if(binaryNumber[counter]=='1') {  
            onesComplement[counter] = '0';  
        } else if(binaryNumber[counter]=='0') {  
            onesComplement[counter] = '1';  
        } else {  
            cout<<"Error : ";  
            return 1;
        }  
    }  
    onesComplement[digitCount] = '\0';
     
    
    for(counter = digitCount-1; counter >= 0; counter--) {  
        if(onesComplement[counter]=='1' && carry==1){
            twosComplement[counter] = '0';  
        } else if(onesComplement[counter]=='0' && carry==1) {  
            twosComplement[counter] = '1';  
            carry = 0;  
        } else {  
            twosComplement[counter] = onesComplement[counter];  
        }  
    }  
    twosComplement[digitCount] = '\0'; 
       
    printf("Two's Complement : %s", twosComplement);  
   
    return 0;  
} 
