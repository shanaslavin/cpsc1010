/* Shana Slavin
   CPSC 1010, 001
   Due March 10, 2017
   Working with arrays to convert user-inputted binary numbers to the decimal equivalent.
*/

#include <stdio.h>
#include <math.h>

int main(){

  //loop control
  int i = 0;
  //user input
  int binaryNum = 0;
  //solving for binary number
  int solvedDecimalNum = 0;

  printf("Enter a binary number of up to 10 digits:\n");
  scanf(" %d", &binaryNum);

  //determines number length
  int numOfDigits = (log10(binaryNum)) + 1;
  //array
  int binaryArray[numOfDigits];

  for (i = 0; i < numOfDigits; i++){
    binaryArray[i] = binaryNum % 10;
    binaryNum = binaryNum / 10;

  }

  printf("The binary number you entered was:\n");

  for (i = numOfDigits - 1; i >= 0; i--){
    printf("%d", binaryArray[i]);

  }

  printf("\n");

  for (i = 0; i < numOfDigits; i++){
    solvedDecimalNum += binaryArray[i] * pow(2, i);

  }

  printf("The decimal equivalent of that number is: %d\n", solvedDecimalNum);

  return 0;

}
