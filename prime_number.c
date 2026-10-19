#include <stdio.h>
int main(){
	int user_limit,counter = 0,i,j;
	// taking the limit from the user.
	printf("Enter a limit: ");
	scanf("%d",&user_limit);
	
	// finding whether a number has two factors then it's prime.
	for(i = 2; i <= user_limit; i++){
		for(j = 1; j <= i; j ++){
			if(i % j == 0){
				counter = counter + 1;
			}
		}
		if(counter == 2){
		    printf("%d is a prime number",i);
	}
	printf("\n");
	// resetting the counter back to zero for each i value.
	counter = 0;
}

	return 0;
}
/* Program to determine the prime numbers in a range of numbers. */
