#include <stdio.h>
// sum of N numbers using recursion

int sum(int n){
	//1. base case.
	if(n == 1){
		return 1;
	}else{
		//2. recursive case.
		return n + sum(n - 1);
	}
}
int main(){
	int num = 10;
	// calling the function
	printf("%d",sum(num));
	
	return 0;
}
