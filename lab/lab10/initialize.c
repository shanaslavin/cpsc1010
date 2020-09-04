// Shana Slavin
// CPSC1010, 001
// Due April 7, 2017
// Lab 10
// implements all function

#include "lab10.h"

void initialize(int a[]){
	int userInput = 0;
	printf("Choose 1-4 to initialize an array\n");
	printf("1. all numbers from 1-20\n");
	printf("2. the first 20 even numbers beginning with 2\n");
	printf("3. the 20 odd numbers, beginning with 1\n");
	printf("4. the first 20 fibonacci numbers, beginning with 0 and 1\n");
	scanf("%i", &userInput);

	if(userInput == 1){
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

void all(int a[]){
	int i;

	for(i = 0; i < SIZE; i++){
		a[i] = i + 1;
	}
}

void even(int a[]){
	int i;
	
	a[0] = 2;

	for (i = 1; i < SIZE; i++){
		a[i] = a[i-1] + 2;
	}

}

void odd(int a[]){
	int i;

	for (i = 0; i <= SIZE; i++){
		a[i] = 2 * i + 1;
	}

}

void fib(int a[]){
	int i;
	
	a[0] = 0;
	a[1] = 1;
	
	for (i = 2; i < SIZE; i++){
		a[i] = a[i-2] + a[i-1];
	}
}
