// Shana Slavin
// CPSC1010, 001
// Due April 7, 2017
// Lab 10
// Learning to use a MakeFile

#include "lab10.h"

int main(){

	int firstList[SIZE];
	int secondList[SIZE];
	int sumOfInnerProduct = 0;

	initialize(firstList);
	initialize(secondList);
	sumOfInnerProduct = innerProduct(firstList, secondList);
	printArray(firstList);
	printArray(secondList);

	printf("%d\n", sumOfInnerProduct);

	return 0;

}
