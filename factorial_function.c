#include <stdio.h>
// function definition.
int fac(int n){
	//1. Base case.
	if(n == 1 || n == 0){
		return 1;
		// 2. Recursive case.
	}else{
		return n * fac(n - 1);
	}
	// once n is not 1, the recursive case is printed.
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	// passing "num" by value.
	printf("%d! = %d",num,fac(num));
	
	return 0;
}
