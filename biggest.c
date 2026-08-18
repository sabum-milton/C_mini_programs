#include <stdio.h>
int main(){
	int array1[10] = {12,34,56,78,30,45,11,90 , 100, 150};
	int i, max = 0;
	for ( i = 0; i < 10; i ++){
		if (array1[i] > max){
			max = array1[i];
			printf("%d ",max);
		}
	}
	printf("%d ",max);

	return 0;
}
