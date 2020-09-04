// Shana Slavin
// CPSC1010, 001
// Due April 14, 2017
// Lab 11
// Using character pointers and dynamically allocated memory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char *str2, const char *str1);

int main(){

	int strLen = 0;
	char *str1;
	char *str2;

	printf("What is the longest length of a string that you will enter? ");
	scanf("%d", &strLen);

	strLen += 1;

	str1 = malloc(strLen * sizeof(char));
	str2 = malloc(strLen * sizeof(char));

	if (str1 == NULL || str2 == NULL){
		printf("malloc or calloc failed to allocated enough memory!\n");
		return 1;
	}

	printf("Enter a string: ");
	scanf("%s", str1);

	my_strcpy(str2, str1);

	my_strcpy(str1, "You entered:");

	printf("%s %s\n", str1, str2);
	
	free(str1);
	free(str2);

	return 0;

}

void my_strcpy(char *str2, const char *str1){

	int i;

	for(i = 0; str1[i] != '\0'; i++){
		str2[i] = str1[i];
	}

	str2[i] = '\0';

} 
