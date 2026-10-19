#include <stdio.h>
/* Multiplication table generator */
int main(){
	int n, i,s,e;
	printf("\t==== WELCOME TO MULTIPLICATION TABLE GENERATOR =====\n\n");
	printf("Enter a number to see multiplication table: ");
	scanf("%d",&n);
	printf("Enter the start of the table: ");
	scanf("%d",&s);
	printf("Enter the end of the table: ");
	scanf("%d",&e);
	for (i = s; i <= e; i ++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}
