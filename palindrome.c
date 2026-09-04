#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	
	// checking if a string is palindrome or not.
	char string1[200], string2[200];
	printf("Enter value for string 1:");
	gets(string1);
	strcpy(string2,string1);
	strrev(string2);
	if(strcmp(string1, string2) == 0){
		printf("%s is a palindrome.",string1);
	}else{
		printf("%s is not a palindrome.",string1);
	}
	
	return 0;
}

