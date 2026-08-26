// Building a simple calculator that performs addition, subtraction and multiplication.
#include <stdio.h>
// prototyping of the functions.
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

// main function.
int main(){
	float num1, num2;
	int choice;
	while(1){
	printf("\nWelcome to this simple calculator program!!\n\n");
		
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	
	printf("Enter a value for num1: ");
	scanf("%f",&num1);
	printf("Enter a value for num2:");
	scanf("%f",&num2);
	
	printf("What operations would you like?\n\n");
	scanf("%d",&choice);
	

	
	if(choice == 1){
		printf("The sum of %.2f and %.2f is %.2f", num1,num2, add(num1, num2));
	}
	else if(choice == 2){
		printf("The difference of %.2f and %.2f is %.2f",num1,num2,sub(num1,num2));
	}
	else if(choice == 3){
		printf("The product of %.2f and %.2f is %.2f",num1, num2, mul(num1,num2));
	}
	else if(choice == 4){
		printf("The divident of %.2f and %.2f is %.2f",num1,num2,div(num1,num2));
	}
	else if(choice != 1 || 2 || 3 || 4){
		printf("Goodbye!!");
		return 0;
	}
}

}
// additon function
float add(float num1, float num2){
	return (num1 + num2);
}

// subtraction function
float sub(float num1, float num2){
	return (num1 - num2);
}

// multiplication function.
float mul(float num1, float num2){
	return (num1 * num2);
}
float div(float num1, float num2){
	if (num1 == 0)
	return (num2 / num1);
	else
	return (num1 / num2);
}
