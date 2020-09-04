// Shana Slavin
// CPSC1010, 001
// Due April 7, 2017
// Lab 10
// prints the array

#include "lab10.h"

void printArray(int a[]){
	int i;

	for (i = 0; i < SIZE; i++){
		printf("%d ", a[i]);
	}

	printf("\n");
}
