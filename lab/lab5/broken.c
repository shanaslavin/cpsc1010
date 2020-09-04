/*Shana Slavin
   CPSC1010, 001
   Due February 24, 2017
   Lab5, debugging with gdb
This program creates an array containing 5 integers,
   checks to see if the number 8 is in the array, and 
   computes the product of the array.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
  int i = 0, count = 0, search = 1, found = -1;
  int product = 0;
  int numberToFind = 8;
  int number = 1;   
  int table[5];

  table[0] = number;
  printf( "table[%i]: %i\n", count, table[count] );

  count = 1;
  while( count < 5 ) {
    table[count] = number * 2;
    printf( "table[%i]: %i\n", count, table[count] );
    number++;
    count++;
  }
//The loop was never satisfied and went into an infinite loop because the while loop was never checking the variable "search", it set the variable to an integer.
  while( (search == 1) ) {
    if( table[i] == numberToFind ) {
      search = 0;
      found = i;
    }
    if( count == i ) {
      search = 0;
    }
    i++;
  }
	
  if( found >= 0 )
    printf( "The number %d is in the table at index %d.\n", numberToFind, found );
  else
    printf( "The number %d is not in the table.\n", numberToFind);
//This loop was never satisfied and went into an infinite loop. This was changed so a condition could be met.
  for( i = 0, product = 1; i < count; i++){
    product = product * table[i];
  }

  printf("The product of the values in the table is %d.\n", product);
  
  return 0;
}

