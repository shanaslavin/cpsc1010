/* Shana Slavin
   CPSC 1010, 001
   Due March 3, 2017
   Lab 6
   workding with conditional statements and loops.
*/

#include <stdio.h>

int main(){

char goAgain = '1';
char letter;


while (goAgain == '1'){
	printf("Enter a letter or a number from the keyboard. ");	
	scanf(" %c", &letter);

	//Checks the user input to see if its uppercase, lowercase, or a number.
	if ((65<=letter)&&(letter<=95)){
		letter  += 32;
		printf("The lower case of that letter is: %c\n", letter);
		printf("\n");
		}
		else if ((97<=letter)&&(letter<=122)){
			letter -= 32;
			printf("The upper case of that letter is: %c\n", letter);
			printf("\n");
			}
			else if ((48<=letter)&&(letter<=57)){
				if (letter % 2 == 0){
					printf("You entered an even number.\n");
					printf("\n");
				}
				else{
					printf("You entered an odd number.\n");
					printf("\n");
				}
			}
				//Checks for invalid input
				else{ 
					printf("You entered an invalid character.\n");
					printf("\n");
				}			
	//Checks if user wants to go again
	printf("Would you like to go again? Enter 1 for yes, 0 for no ");
	scanf(" %c", &goAgain);
	
	//error message for invalid repeat	
	while ((goAgain != '1')&&(goAgain != '0')){
		printf(" Invalid input. Enter a 1 to go again, or a 0 to quit: ");
		scanf(" %c", &goAgain);
	}
	
	if (goAgain == '1'){
		printf("\n");
	}

}

return 0;

}
