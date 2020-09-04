// Shana Slavin
// CPSC 1010/1011
// Due March 31, 2017
// Project 3
// Using functions to draw shapes



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Global variables for loop indicies
int i, j; 

//Get a shape from a user, and return the shape if it is valid;
// otherwise, print an error message and terminate the program
char getShapeFromUser(void);

//Get a length from a user, and return the length if it is valid;
//  otherwise, print an error message and terminate the program
int getLengthFromUser(void);

//Get a height from a user, and return the height if it is valid;
//  otherwise, print an error message and terminate the program
int getHeightFromUser(void);

bool isShapeValid(char shape);

bool isLengthValid(int length);

bool isHeightValid(int height);

void drawRectangle(int length, int height);

void drawTriangle(int length);

void drawHexagon(int length);

void drawOctagon(int length);

void drawPentagon(int length);

//Do not modify the main function
int main(void){  
  char shape = getShapeFromUser();
  int length = getLengthFromUser();
  int height;

  if(shape == 'r'){
    height = getHeightFromUser();
    printf("Below is a %d by %d rectangle of *\n", length, height);
    drawRectangle(length, height);
  }
  else if(shape == 't'){
    printf("Below is a triangle with two side lengths of %d *\n", length);
    drawTriangle(length);
  }
  else if(shape == 'h'){
    printf("Below is a hexagon with side lengths of %d *\n", length);
    drawHexagon(length);
  }
  else if(shape == 'o'){
    printf("Below is an octagon with side lengths of %d *\n", length);
    drawOctagon(length);
  }
  else if(shape == 'p'){
    printf("Below is a pentagon with 4 side lengths of %d *\n", length);
    drawPentagon(length);
  }
  return 0;
}

//Implement function prototypes below

char getShapeFromUser(void){
  char shape = '\0';
  printf("Enter a shape: r t h o p\n");
  scanf("%c", &shape);
  if( !isShapeValid(shape) ){
    printf("Invalid shape\nGoodbye!\n");
    exit(0);
  }
  return shape;
}

int getLengthFromUser(void){
  int length = 0;
  printf("Enter a length\n");
  scanf("%d", &length);  
  if( !isLengthValid(length) ){
    printf("Length must be greater than 1\nGoodbye!\n");
    exit(0);    
  }
  return length;
}

int getHeightFromUser(void){
  int height = 0;
  printf("Enter a height\n");
  scanf("%d", &height);
  if( !isHeightValid(height) ){
    printf("Height must be greater than 1\nGoodbye!\n");
    exit(0);    
  }    
  return height;
}

//checks shape for validity
bool isShapeValid(char shape){
  bool shapeValid = 0;
  if (shape == 'r' || shape == 't' || shape == 'h' || shape == 'o' || shape == 'p')
    shapeValid = 1;
    return shapeValid;

}

//checks to see if length is greater than 1
bool isLengthValid(int length){
  bool lengthValid = 0;
  if (length > 1)
    lengthValid = 1;
    return lengthValid;   

}
//checks to see if height is greater than 1
bool isHeightValid(int height){
  bool heightValid = 0;
  if (height > 1)
    heightValid = 1;
    return heightValid;

}
//prints rectangle
void drawRectangle(int length, int height){
  for (i = 1; i  <= height; i++){
    for (j = 1; j <= length; j++){
      printf("*");
    }
    printf("\n");
  }
}
//prints triangle
void drawTriangle(int length){
  int spaces = 0;

  for (i = 1; i <= length; i++){
    for (spaces = 1; spaces <= length - i; spaces++){
      printf(" ");
    }
    for (j = 1; j <= (i +i) - 1; j++){
      printf("*");
    }
    printf("\n");
  }
}
//prints hexagon
void drawHexagon(int length){
  int spaces = 0;
  //prints top half of hexagon
  for (i = 1; i <= length; i++){
    for (spaces = 1; spaces <= length - i; spaces++){
      printf(" ");
    }
    for (j = 1; j <= length + 2 * (i - 1); j++){
      printf("*");
    }
    printf("\n");
  }
  //bottom half of hexagon
  for (i = 1; i <= length - 1; i++){
    for (spaces = 1; spaces <= i; spaces++){
      printf(" ");
    }
    for (j = 1; j <= 3 * length - 2 * (i + 1); j++){
      printf("*");
    }
    printf("\n");
  }

}
//prints octagon
void drawOctagon(int length){
  int spaces = 0;
  //prints top of hexagon
  for (i = 1; i <= length; i++){
    for (spaces = 1; spaces <= length - i; spaces++){
      printf(" ");
    }
    for (j = 1; j <= length + 2 * (i - 1); j++){
      printf("*");
    }
    printf("\n");
  }
  //prints rectangle
  for (i = 1; i <= length - 1; i++){
    for (j = 1; j <= 3 * length - 2; j++){
      printf("*");
    }
      printf("\n");
  }
  //prints bottom of hexagon
  for (i = 1; i <= length - 1; i++){
    for(spaces = 1; spaces <= i; spaces++){
      printf(" ");
    }
    for (j = 1; j <= 3 * length -2 * (i + 1); j++){
      printf("*");
    }
    printf("\n");
  }
}
//prints pentagon
void drawPentagon(int length){
  int spaces = 0;
  
  //draws triangle half of pentagon 
  for (i = 1; i <= length; i++){
    for (spaces = 1; spaces <= length - i; spaces++){
      printf(" ");
      }
    for (j = 1; j <= (i + i) - 1; j++){
      printf("*");
      }
      printf("\n");
  }  
  //draws rectangle half of pentagon 
  for (i = 1; i <= length - 1; i++){
    for (j = 1; j <= length + length - 1; j++){
      printf("*");
    }
    printf("\n");
  }


}


