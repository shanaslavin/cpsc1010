// Shana Slavin
// CPSC1010, 001
// Due April 7, 2017
// Lab 10
// implements inner product function

#include "lab10.h"

int innerProduct(int a[], int b[]){
	int i;
	int sumOfInnerProduct = 0;

	for (i = 0; i < SIZE; i++){
		sumOfInnerProduct += a[i] * b[i];
	}

	return sumOfInnerProduct;
}
