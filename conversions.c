#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float FahrenheitToCelsius(float fahrenheit){
	return (fahrenheit - 32) * 5/9;
}

int main() {
    float celsius,fahrenheit;
    int choice;
    
    while(1){
    printf("Which conversion do you like.\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exixt.\n");
    
    printf("Enter a choice:");
    if (scanf("%d", &choice) != 1) {
        int character;

        printf("Invalid input. Please enter a number: 1, 2, or 3.\n");

        while ((character = getchar()) != '\n' && character != EOF) {
            // Remove invalid text from the input.
        }

        continue;
    }
    printf("\n");

    switch(choice){
    	case 1:
		    printf("Enter temperature in Celsius: ");
		    scanf("%f", &celsius);
		    printf("Fahrenheit: %.2f\n", celsiusToFahrenheit(celsius));
		    break;
	    
	    case 2:
	    	printf("Enter temperature in Fahrenheit: ");
	    	scanf("%f",&fahrenheit);
	    	printf("Celsuis: %.2f\n",FahrenheitToCelsius(fahrenheit));
	    	break;
	    case 3: 
	    printf("Thank you for playing!!");
	    return 0;
	    
	    default:
	    	printf("Invalid choice.Please enter 1, 2, or 3\n");
	    	continue;
	    }
}
	    printf("\n");
    return 0;
}
