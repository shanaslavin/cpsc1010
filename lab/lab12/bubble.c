// Shana Slavin
// CPSC1010, 001
// Due April 21, 2017
// Lab 12
// Reading in command line argument; sorting; opening files, reading from/writing to files and lcosing files.


/*
  bubble.c

  This program reads in a list of numbers, prints it to stdout, uses
  bubble sort to sort it, prints it again, and then writes it to the
  specified output file.
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


// Function prototypes
void printArray(int array[], int size);
int  readNumbers(int array[], char* fname);
void writeNumbers(int array[], int size, char* fname);
void bubbleSort(int array[], int size, bool isIncreasing);
void sort(int* first, int* second, bool isIncreasing);
void swap(int* first, int* second);

int main(int argc, char* argv[]) {
  const int MAX_NUMBERS = 100;

  char * inFileName;
  char * outFileName;
  int  numbers[MAX_NUMBERS];
  int  count;
  int  exitValue = 1;

  if(argc != 3){
    puts("Error:  this program requires three command line arguments");
    puts("Example:  ./a.out input1.txt output.txt");
  }
  else{
    inFileName = argv[1];
    //set inFileName to argv[1], the second command line argument

    count = readNumbers(numbers, inFileName);

    if (count <= 0)
      printf("The input file was empty or could not be openeded.\n\n");
    else if (count > 0) {
      outFileName = argv[2];
      //set outFileName to argv[2], the third command line argument

      printf("\n");
      printArray(numbers, count);
      bubbleSort(numbers, count, true);

      printArray(numbers, count);
      printf("\n");
      writeNumbers(numbers, count, outFileName);

      exitValue = 0;
    }
  }

  return exitValue;
}


/*  readNumbers()
    This function tries to open the file whose name is contained in the
    string variable 'fname' and read its contents into the array 'array'.  

    preconditions:
    - 'array' is an integer array large enough to hold all of the
    elements in the file and 'fname' represents a valid filename

    postconditions:
    - If 'fname' can be opened then its contents are read into
    the array 'array', the function returns the number of elements
    read.  If 'fname' is invalid, then -1 is returned.
*/
int readNumbers(int array[], char* fname) {
  int numberRead = 0;
  int i = 0;
  // Declare local variables and FILE pointer
  FILE * file1 = NULL;
  // Use fopen to try to open the file for reading
  file1 = fopen (fname, "r");
  // Test to see if the file was opened correctly
  if (file1 == NULL){
    return (-1);

  }
  // Now read until !feof(...
  while ( !feof(file1) ){
    numberRead += fscanf(file1, "%d", &array[i++]);
   // numberRead += 1;
  }
  // Close the file pointer
  fclose(file1);
  // Return the number of items read
  return numberRead;
}


/*  writeNumbers()
    This function writes the first 'size' numbers from array 'array' to a file
    whose name is contained in 'fname'.

    preconditions:
    - 'array' is an array of integers equal to or larger than
    size and 'fname' holds a valid filename

    postconditions:
    - If a file can be created then 'size' elements from
    a are written to that file and it is closed.  If
    the file cannot be created then an error message 
    "The output file could not be created." is printed to stdout.
*/
void writeNumbers(int array[], int size, char* fname) {
  // Declare local variables and FILE pointer
  FILE * file2;
  // Use fopen to try to open the file for writing
  file2 = fopen (fname, "w");
  // Test to see if the file was opened correctly
  if (file2 == NULL){
    exit (1);

  }
  // Use fprintf to write to the file
  fprintf(file2, "%d\n", size);
  // close the file
  fclose(file2);

}


/*  This function prints the first 'size' elements from the array 'array' to
    stdout using printf

    preconditions:
    - array' is a valid array with >= 'size' elements

    postconditions:
    - Contents of 'array' are printed to standard output
*/
void printArray(int array[], int size) {
  if (size > 0) {
    int i;

    printf("%d", array[0]);

    for (i = 1; i < size; i++) {
      printf(", %d", array[i]);
    }
    printf("\n\n");
  }
} 


/*  bubbleSort()
    This function implements the bubble sort algorithm

    preconditions:
    - 'array' is an array with at least 'size' elements

    postconditions:
    - If isIncreasing is true, then the array will be sorted
    into non-decreasing order.  If it is false,
    then the array will be sorted into non-increasing order
*/
void bubbleSort(int array[], int size, bool isIncreasing) {
  if (size >= 2) {
    int i;

    for (i = 0; i < size; i++) {
      int j;

      for (j = 0; j < size - 1 - i; j++) {
	sort(&array[j], &array[j + 1], isIncreasing);
      }
    }
  }
}


/*  sort()
    Sort will interchange the values pointed to by 'first' and 'second' if
    they aren't in the correct order as specified by 'dir'

    preconditions:
    - integer pointers 'first' and 'second' are non-NULL

    postconditions:
    - If isIncreasing is true then 'second' will be >= 'first'
    - If isIncreasing is false then 'second' will be <= 'first'
*/
void sort(int* first, int* second, bool isIncreasing) {
  if (  ( (!isIncreasing) && (*first < *second) ) || 
	( ( isIncreasing) && (*first > *second) )   ) {
    swap(first, second);
  }
}


/*  swap()
    Swaps the values pointed to by the parameters 'first' and 'second'

    preconditions:
    - Neither 'first' nor 'second' are NULL

    postconditions:
    - The variable pointed to by 'first' has the initial value of
    the variable pointed to by 'second', and vice versa.
*/
void swap(int* first, int* second) {
  int holder;

  holder  = *first;
  *first  = *second;
  *second = holder;
}
