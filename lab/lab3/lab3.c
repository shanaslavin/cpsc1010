/* Shana Slavin
CPSC 1010, 001
Due 02-10-2017
Lab 03
Using integer variables, mathematical operations, and redirection to learn more about coding in the C langauge.
*/

#include <stdio.h>

int main(){

	int intVar1 = 4;
	int intVar2 = 3;
	int intVar3 = 3;
	int intVar4 = 5;

	int exp1 = intVar1 + (5 * (intVar2 / 3)) * intVar1;
	int exp2 = ((intVar1 + 5) * intVar2) / (3 * intVar1);
	int exp3 = intVar3 + ( (4 * intVar4) / (3 * intVar3) );
	int exp4 = (intVar4 % 2) / (intVar4 / intVar3);

	fprintf(stdout, "	intVar = %d and intVar2 = %d\n", intVar1, intVar2);
	fprintf(stdout, "	Expression values are:\n");
	fprintf(stdout, "	exp1 = %d\n", exp1);
	fprintf(stdout, "	exp2 = %d\n", exp2);
	fprintf(stdout, "\n	intVar3 = %d and intVar4 = %d\n", intVar3, intVar4);
	fprintf(stdout, "	Expression values are:\n");
	fprintf(stdout, "	exp3 = %d\n", exp3);
	fprintf(stdout, "	exp4 = %d\n", exp4);
	
	return 0;
}
