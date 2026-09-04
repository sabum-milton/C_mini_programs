/* Functions in C
> call by value: Here changes made on parameters don't reflect on the arguments.
> Call by reference: Here, the reference of the value is passed at the time of calling[changes on formal parameters, reflect on actual parameters.]
> A recursive function is one that calls itself. A factorial function calls itself.

> A string datatype is not supported in c, rather we use the char and are stored in single dimensional array.
> predefined strings are stored in the string.h header file.
> Concatination is to join two strings only.
*/



#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char name[69] = "Milton is ";
char age[100] = "Seven years old";

printf("%d\n",strlen(name)); // finding length of the string[strlen]
//strcpy(name, age);
//printf("%s has now become name\n",name); // copying value from one string to another.

if(strcmp(name,age) == 0){
	printf("same\n");
}else{
	printf("Different\n.");
}

printf("%s ",strcat(name,age));

	
	return 0;
}
