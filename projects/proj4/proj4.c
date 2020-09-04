// Shana Slavin
// CPSC 1010, 001
// Due April 26, 2017
// Project 4
// A multi-module C program that counts how many of each letter of the alphabet is in each sample.

#include "proj4.h"

/*
 * Search through each character in s,
 * which is array containing n strings, 
 * and update the global count array
 * with the correct character counts.
 * Note: check the examples to see
 * if the counts should be case 
 * sensitive or case insensitive.
 */
void letterCount(char * s[], int n){
  //Implement this function
	int i = 0;
	//int j = 0;
	int names = 0;
	char letter;

	for (i = 0; i < n; i++){
		for (letter = 'A'; letter <= 'Z'; letter++){
			for (names = 0; names < (int) strlen(s[i]); names++){
				if (s[i][names] == letter){
					count[letter - 'A'] += 1;
				}
			}
		}
	}
	
	for (i = 0; i < n; i ++){
		for (letter = 'a'; letter <= 'z'; letter++){
			for (names = 0; names < (int) strlen(s[i]); names++){
				if(s[i][names] == letter){
					count[letter - 'a'] += 1;
				}
			}
		}
	}
			
}

/*
 * Initialize each value in theglobal
 * count array to zero.
 */
void initializeCount(){
  //Implement this function
	int i = 0;
	
	for (i = 0; i < 26; i++){
		count[i] = 0;
	}
}

