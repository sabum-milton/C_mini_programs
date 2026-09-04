/* Building a  calculator that performs addition, subtraction and multiplication, 
calculates sin, cos, tan and other hyperbolic functions and a few more math operations.
*/

// declaration of header files.
#include <stdio.h>
#include<conio.h>
#include<math.h>
#define PI  3.14159265358979323846

// prototyping of the functions.
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int factorial(int);

// main function.
int main(){
	float num1, num2,lognum,absnumber;
	float value;
	int choice, number;
	// shows the menu when ever choice is true.
	while(1){
	printf("\nWelcome to this calculator program!!\n\n");
		
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. sin() \n");
	printf("6. cos()\n");
	printf("7. tan()\n");
	printf("8. sinh()\n");
	printf("9. cosh()\n");
	printf("10. tanh()\n");
	printf("11. Factorial\n");
	printf("12. Power(base, eponent)\n");
	printf("13. Natural log(log)\n");
	printf("14. Log base10(log10)\n");
	printf("15. Absolute value (abs())\n");
    printf("16. round down, up and normal round a number\n");
	printf("17. Exit\n");

	
	printf("\nWhat operations would you like?\n\n");
	scanf("%d",&choice);

	
	if(choice == 1){
		float result = add(num1, num2);
		printf("The sum is %.2f\n",  result);
	}
	else if(choice == 2){
		float result = sub(num1, num2);
		printf("The difference is %.2f",result);
	}
	else if(choice == 3){
		float result = mul(num1, num2);
		printf("The product is %.2f", result);
	}
	else if(choice == 4){
		float result = div(num1, num2);
		printf("The divident is %.2f",result);
	}
	else if(choice == 5){
		printf("Enter value to find sin(value)");
		scanf("%f",&value);
		printf("The sine of %.2f is %.2f",value,sin(value));
	}
		else if(choice == 6){
			printf("Enter value to find cos(value)");
		scanf("%f",&value);
		printf("The cosine of %.2f is %.2f",value,cos(value));		
}
		else if(choice == 7){
		printf("Enter value to find tan(value)");
		scanf("%f",&value);
		printf("The tangent of %.2f is %.2f",value,tan(value));

}
else if(choice == 8){
printf("Enter value to find sinh(value)");
		scanf("%f",&value);
		printf("The hyperbolic sine of %.2f is %.2f",value,sinh(value));
}
else if(choice == 9){
printf("Enter value to find cosh(value)");
		scanf("%f",&value);
		printf("The hyperbolic cosine of %.2f is %.2f",value,cosh(value));
}
else if(choice == 10){
printf("Enter value to find tanh(value)");
		scanf("%f",&value);
		printf("The hyperbolic tangent of %.2f is %.2f",value,tanh(value));
}
else if(choice == 11){
printf("Enter a number to get factorial:");
scanf("%d",&number);
int result = factorial(number);
printf("The factorial of %d is %d",number, result);
}
else if(choice == 12){
int base, exponent;
printf("Enter the base:");
scanf("%d",&base);
printf("Enter the exponent or power to raise %d to:",base);
scanf("%d",&exponent);
int result = pow(base, exponent);
printf("The result of %d^%d is %d\n",base,exponent,result);
}
else if(choice == 13){
printf("Enter a value to obtain the natural log of that number(log()):");
scanf("%f",&lognum);
printf("The result: log(%f) = %.2f",lognum,log(lognum));
}
else if(choice == 14){
printf("Enter number to obtain log10 of it:");
scanf("%f",&lognum);
printf("Log10(%f) = %.2f",lognum,log10(lognum));
}
else if(choice == 15){
printf("Enter a negative number to get absolute value:");
scanf("%f",&absnumber);
printf("The absolute value of %f is %f",absnumber,abs(absnumber));
}
else if(choice == 16){
printf("Enter number:");
scanf("%f",&absnumber);
printf("%f rounded down gives %f\n",absnumber,floor(absnumber));
printf("%f rounded up gives %f\n",absnumber,ceil(absnumber));
printf("%f properly round gives %f\n",absnumber,round(absnumber));

}
else{
return 0;
} // for the termination of the if-else block.
	}
	return 0;
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
// Division function
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
// factorial function
int factorial(int number){
	int i,fac = 1;
for (i = number; i >= 1; i --){
fac = fac * i;
}
return fac;
}
