#include <stdio.h>
int main(){ 
	int num = 435, count = 0;
	while(num){
		count ++;
		num >>= 1; // logical double right shift.
	}
	printf("%d",count);
	
	return 0;
}
