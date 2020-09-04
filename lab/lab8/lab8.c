/* Shana Slavin
   CPSC 1010, 001
   Due March 17, 2017
   Lab 8
   Using, calling, and returning results from functions.
*/

#include <stdio.h>

//cosntant size for arrays
const int sizeOfArray = 20;
//initializes menu in main function
void initialize(int a[]);
//all numbers from 1-20
void all(int a[]);
//first 20 even numbers beginning with 2
void even(int a[]);
//the 20 odd numbers, beginning with 1
void odd(int a[]);
//the first 20 fibonacci numbers, beginning with 0 and 1
void fib(int a[]);
//printing out the array
void printArray (int a[]);
//inner product of two arrays is the sum of the component-wise products
int innerProduct(int a[], int b[]);


int main(){
	
	int firstList[sizeOfArray];
	int secondList[sizeOfArray];
	int sumOfInnerProduct = 0;

	initialize(firstList);
	initialize(secondList);
	sumOfInnerProduct = innerProduct(firstList, secondList);
	printArray(firstList);
	printArray(secondList);

	printf("%d\n", sumOfInnerProduct);
	
	return 0;

}

/*description: initializes the menu
  inputs: integer user-inputted
  outputs: none
*/
void initialize(int a[]){
	int userInput = 0;
	printf("Choose 1-4 to initialize an array\n");
	printf("1. all numbers from 1-20\n");
	printf("2. the first 20 even numbers beginning with 2\n");
	printf("3. the 20 odd numbers, beginning with 1\n");
	printf("4. the first 20 fibonacci numbers, beginning with 0 and 1\n");
	scanf("%i", &userInput);
	
	if (userInput == 1){
		all(a);
	}
	if (userInput == 2){
		even(a);
	}
	if (userInput == 3){
		odd(a);
	}
	if (userInput == 4){
		fib(a);
	}
}

/* description: initializes all integers from 1-20
   inputs: a[]
   outputs: void
*/
void all(int a[]){
	int i;

	for(i = 0; i < sizeOfArray; i++){
		a[i] = i + 1;
	}


}

/* description: the first 20 even numbers beginning with 2
   inputs: a[]
   outputs:void
*/
void even(int a[]){
	int i;

	a[0] = 2;

	for (i = 1; i < sizeOfArray; i++){
		a[i] = a[i-1] + 2;

	}
	

}

/*description: the 20 odd numbers, beginning with 1
  inputs: a[]
  outputs: void
*/
void odd(int a[]){
	int i;

	for (i = 0; i <= sizeOfArray; i++){
		a[i] = 2 * i + 1;

	}


}

/*description: prints arrays
  inputs: a[]
  output: void
*/

void printArray(int a[]){
	int i;

	for (i = 0; i < sizeOfArray; i++){
		printf("%d ", a[i]);
	}

	printf("\n");

}

/*description: calculates finonacci numbers
  inputs: a[]
  outputs: void
*/

void fib(int a[]){
	int i;

	a[0] = 0;
	a[1] = 1;
	
	for (i = 2; i < sizeOfArray; i++){
		a[i] = a[i-2] + a[i-1];
	}

}

/*description: calculates the inner product of the two arrays
  input: integer
  output: integer
*/

int innerProduct(int a[], int b[]){
	int i;
	int sumOfInnerProduct = 0;

	for (i = 0; i < sizeOfArray; i++){
		sumOfInnerProduct += a[i] * b[i];
	}

	return sumOfInnerProduct;

}
