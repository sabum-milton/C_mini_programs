#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	// count words in a string.
	char name[200] = "Sabum Milton Mbah";
	int i, counter = 0;
	for ( i = 0; i < strlen(name); i ++){
	
	counter = counter + 1;
		if(name[i] == " ")
			counter = counter - 1;
	}
	printf("%d",counter);
	return 0;
}
