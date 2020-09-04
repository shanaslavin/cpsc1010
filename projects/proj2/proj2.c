/* Shana Slavin
   CPSC1010
   Due March 3, 2017
   Project 2
   This project will utilize loops and if statements to create 4 shapes: rectangle, triangle, hexagon, and octogon.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int height = 0;
	int length = 0;
	int row = 0;
	int stars = 0;
	int spaces = 0;
	char shape;
	
	//asks user what shape they want printed
	printf("Enter a shape: r t h o\n");
	scanf("%c", &shape);
	
	//checks for invalid shape
	if ((shape != 'r')&&(shape != 't')&&(shape != 'h')&&(shape != 'o')){
		printf("Invalid shape\n");
		printf("Goodbye!\n");
		exit (0);
	}

	//prints the rectangle
	if (shape == 'r'){
		printf("Enter a length\n");
		scanf("%d", &length);
	
		//checks for invalid length		
		if (length<=1){
			printf("Length must be greater than 1\n");
			printf("Goodbye!\n");
			exit (0);
		}
		
		else{

			printf("Enter a height\n");
			scanf("%d", &height);
		

			printf("Below is a %d by %d rectangle of *\n", length, height);
		
			for (row = 1; row<=height; row++){
				for (stars = 1; stars<=length; stars++){
					printf("*");
				}
				printf("\n");
			}
		}
	}

	//prints the triangle
	else if (shape == 't'){
		printf("Enter a length\n");
		scanf("%d", &length);
	
		//checks for invalid length	
		if (length<=1){
			printf("Length must be greater than 1\n");
			printf("Goodbye!\n");
			exit (0);
		}

		else{
	
			printf("Below is a triangle with side lengths of %d *\n", length);
	
			for (row = 1; row<=length; row++){
				for (stars = 1; stars<=row; stars++){
					printf("*");
				}
				printf("\n");
			}
		}
	}

	//prints the hexagon
	else if (shape == 'h'){
		printf("Enter a length\n");
		scanf("%d", &length);

		//checks for invalid length
		if (length<=1){
			printf("Length must be greater than 1\n");
			printf("Goodbye!\n");
			exit (0);
		}
		
		else{
	
			printf("Below is a hexagon with side lengths of %d *\n", length);

			//top half of the hexagon
			for (row = 1; row<=length; row++){
				for (spaces = 1; spaces<=length-row; spaces++){
					printf(" ");
				}
				for (stars = 1; stars<=length+2*(row-1); stars++){
					printf("*");
				}
				printf("\n");
			}
	
			//bottom half of the hexagon
			for (row = 1; row<=length-1; row++){
				for (spaces = 1; spaces<=row; spaces++){
					printf(" ");
				}
				for (stars = 1; stars<=3*length-2*(row+1); stars++){
					printf("*");
				}
				printf("\n");
			}
		}
	}

	//prints octagon
	else if (shape == 'o'){
		printf("Enter a length\n");
		scanf("%d", &length);
		
		//checks for invalid length
		if (length<=1){
			printf("Length must be greater than 1\n");
			printf("Goodbye!\n");
			exit (0); 
		}
		else{
		

			printf("Below is a octagon with side lengths of %d *\n", length);
	
			//prints top of hexagon
			for (row = 1; row<=length; row++){
				for (spaces = 1; spaces<=length-row; spaces++){
					printf(" ");
				}	
				for (stars = 1; stars<=length+2*(row-1); stars++){
					printf("*");
				}
				printf("\n");
			}
	
			//prints rectangle
			for (row = 1; row<=length-1; row++){
				for (stars = 1; stars<=3*length-2; stars++){
					printf("*");
				}
			printf("\n");

			}
 
			//prints bottom of hexagon
			for (row = 1; row<=length-1; row++){
				for (spaces = 1; spaces<=row; spaces++){
					printf(" ");
				}
				for (stars = 1; stars<=3*length-2*(row+1); stars++){
					printf("*");
				}
				printf("\n");
			}
		}
	}
	



return 0;

}
