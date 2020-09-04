// Shana Slavin
// CPSC1010, 001
// Due April 14, 2017
// Lab 11
// Using static and dynamic ways of storing strings.

#include <stdio.h>

void my_strcpy(char str2[], const char str1[]);

int main(){

	char str1[31];
	char str2[31];

	printf("Enter a string length of at most 30: ");
	scanf("%s", str1);

	my_strcpy(str2, str1);

	my_strcpy(str1, "You entered:");

	printf("%s %s\n", str1, str2);

	return 0;

}

void my_strcpy(char str2[], const char str1[]){

	int i;

	for(i = 0; str1[i] != '\0'; i++){
		str2[i] = str1[i];

	}

	str2[i] = '\0';


}
