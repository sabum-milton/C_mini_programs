#include <stdio.h>
#include <stdlib.h> 

/* **projects**
 Unit converter : this converter will be able to efficiently convert from one
 unit to another e.g meters to centimeters and lots others.


*/
int main(){
	int choice;
	float cm,m,kg,g;
	printf("Welcome to Unit converter\n\n");
	printf("1. cm to m\n");
	printf("2. kg to g\n");
	printf("3. m to cm\n");
	printf("4. exit\n\n");
	
	while(1){
	printf("Make a choice:\n");
	scanf("%d",&choice);

	switch(choice){
		case 1: 
		printf("Enter value in cm:");
		scanf("%f",&cm);
		m = cm /100;
		printf("%.2fcm = %.2fm\n",cm,m);
		break;
		case 2:
		printf("Enter value in kg:");
		scanf("%f",&kg);
		g = kg * 1000;
		printf("%.2fkg = %.2fg\n",kg,g);
		break;
		case 3:
			printf("Enter value in m:");
			scanf("%f",&m);
			cm = m * 100;
			printf("%.2fm = %.2fcm\n",m,cm);
			break;
		case 4: 
		printf("Goodbye... Thanks for trying!!!");
		exit(4);
		default: 
		printf("Sorry! Invalid choice.");
		
	}
}
	return 0;
}
