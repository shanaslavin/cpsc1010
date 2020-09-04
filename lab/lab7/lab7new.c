/* Shana Slavin
   CPSC1010, 001
   Due March 10, 2017
   Lab 7
   Using loops and arrays to convert decimal to binary
*/



#include <stdio.h>
#include <math.h>

int main(){

//loop control
int i = 0;
//user input variable
int binaryNum = 0;
//determines number length
int numOfDigits = (log10(binaryNum)) + 1;
//integer array
int binaryArray[numOfDigits];

printf("Enter a binary number of up to 10 digits:\n");
scanf("%d", &binaryNum);

for (i = 0; i < numOfDigits; i++){
        binaryArray[i] = binaryNum % 10;
        binaryNum = binaryNum / 10;

}

printf("The binary number you entered was:\n");

for (i = numOfDigits - 1; i >= 0; i--){
        printf("%d", binaryArray[i]);

}

printf("\n");

return 0;

}


