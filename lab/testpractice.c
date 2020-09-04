/* practice for the exam
promt user for integer n>1
if n<1 then print error
otherwise compute factorial of n
*/

#include <stdio.h>

main(){

	int i = 1;
	int num = 0;
	int factorial = 1;	

	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num>1){
		for (i = 1; i <= num; ++i){
			factorial = factorial * i;
		}
		printf("The facortial of %d is %d\n", num, i);
	}
	else{
		printf("Number is not greater than zero\n");
		}
	
	
	return 0;
}
