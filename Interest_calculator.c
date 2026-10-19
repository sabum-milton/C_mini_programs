#include <stdio.h>
#include <math.h>
// prototypes for functions used in the program.
double simple_interest(double,double,int);
double compound_interest(double,double,int,int);
double amount(double,double,int,int);

int main(){
	double principal,rate,SI, CI, Initial_amount;
	int time,n;
	printf("Welcome to this Simple Interest Calculator\n");
	printf("Enter a principal:");
	scanf("%lf",&principal);
	printf("Enter a time in years:");
	scanf("%d",&time);
	printf("Enter the rate as a percentage:");
	scanf("%lf",&rate);
	printf("Enter the number of times interest is compounded per year:");
	scanf("%d",&n);
	
	rate = rate / 100;
	
	
	printf("\n\n===========RESULTS================\n");	
	// calling the simple interest function.
	SI = simple_interest(principal, rate, time);
	printf("The Simple Interest is : %.2lf",SI);
	// calling the amount function
	Initial_amount = amount(principal, rate, n,time);
	printf("\n\nThe Amount is : %.2lf ",Initial_amount);
	 // calling the compound interest function.
	 CI = compound_interest(principal,rate,time,n);
	 printf("\n\nThe Compound Interest is : %.2lf",CI);
	 printf("\n===================================\n");
	 
	 
	return 0;
}
double simple_interest(double principal, double rate, int time){
	double SI = principal * time * rate;
	return SI;
}

double amount(double principal, double rate, int time, int n){
	double Initial_amount = principal* pow(1 + (rate/n), (n*time));
	return Initial_amount;
}

double compound_interest(double principal,double rate,int n,int time){
	double CI = amount(principal,rate,time,n) - principal;
	return CI;
}
