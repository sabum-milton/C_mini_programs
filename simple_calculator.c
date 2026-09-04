// Building a  calculator that performs addition, subtraction and multiplication, calculates sin, cos, tan and other hyperbolic functions and a few more math operations.
#include <stdio.h>
#include<conio.h>
#include<math.h>
// prototyping of the functions.
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

// main function.
int main(){
	float num1, num2;
	int choice;
	// shows the menu when ever choice is true.
	while(1){
	printf("\nWelcome to this calculator program!!\n\n");
		
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. sin() "\n);
		printf("6. cos()\n");
		printf("7. can()\n");
		printf("8. sinh()\n");
		printf("9. cosh()\n");
		printf("10. tanh()\n");
		printf("11. Factorial\n");
		printf("12. Exponent(n)\n");
		printf("13. Power(base, power)\n");
		printf("14. Natural log(log)\n");
		printf("15. Log base10(log10)\n");
		printf("16. Absolute value (abs())\n");
	printf("17. Exit\n");

	
	printf("What operations would you like?\n\n");
	scanf("%d",&choice);

	
	if(choice == 1){
		float result = add(num1, num2);
		printf("The sum of %.2f and %.2f is %.2f", num1,num2, result);
	}
	else if(choice == 2){
		float result = sub(num1, num2);
		printf("The difference of %.2f and %.2f is %.2f",num1,num2,result);
	}
	else if(choice == 3){
		float result = mul(num1, num2);
		printf("The product of %.2f and %.2f is %.2f",num1, num2, result);
	}
	else if(choice == 4){
		float result = div(num1, num2);
		printf("The divident of %.2f and %.2f is %.2f",num1,num2,result);
	}
	else if(choice != 1 || 2 || 3 || 4){
		printf("Goodbye!!");
		return 0;
	}
}

}
// additon function
float add(float num1, float num2){
	printf("Enter a value for num1:");
	scanf("%f",&num1);
	printf("Enter a value for num2:");
	scanf("%f",&num2);
	float sum = num1 + num2;
	return sum;
}

// subtraction function
float sub(float num1, float num2){
	printf("Enter a value for num1:");
	scanf("%f",&num1);
	printf("Enter a value for num2:");
	scanf("%f",&num2);
	float difference = num1 - num2;
	return difference;
}

// multiplication function.
float mul(float num1, float num2){
	printf("Enter a value for num1:");
	scanf("%f",&num1);
	printf("Enter a value for num2:");
	scanf("%f",&num2);
	float product = num1 * num2;
	return product;
}
float div(float num1, float num2){
	printf("Enter a value for num1:");
	scanf("%f",&num1);
	printf("Enter a value for num2:");
	scanf("%f",&num2);
	if (num1 == 0)
	return (num2 / num1);
	else
	return (num1 / num2);
}
