/* Shana Slavin
CPSC 1010, 001
Due February 17, 2017
Different types of loops
This program will implement and allow the user to learn more about loops.
*/

#include <math.h>
#include <stdio.h>

int main(){
	//declare variables
	double number = 0;
	double startingGuess = 0;
	double squareRoot = 0;
	int step = 0;
	//gets user input
	printf("Enter a number: ");
	scanf("%lf", &number);
	printf("Enter a starting guess: ");
	scanf("%lf", &startingGuess);

	double guess = startingGuess;
	//determine square root
	squareRoot = sqrt(number);
	
	printf("The square root of %lf is %lf\n", number, squareRoot);
	
	
	//start of loop		
	while (fabs(sqrt(number) - guess) >= 5e-7){
		guess = .5*(guess + (number / guess));
		step++;
		printf("Step %2d:  %15lf\n", step, guess);

	}
	
	//prints results
	printf("Using the Babylonian method, the square root of %g\n", number);
	printf("with a starting guess of %g was found in %d steps\n", startingGuess, step);

	return 0;
	
}
