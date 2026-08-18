/* File: reverse_array.c 

content: printing an array in the reverse order.
*/

#include <stdio.h>
int main(){
	int arr1[10],i;
	printf("Enter the elements of the array:\n");
	for(i = 1; i <= 10; i ++){
		scanf("%d",&arr1[i]);
	}
	printf("The elements of the array are:\n");
	for(i = 1; i <= 10; i ++){
		printf("%3d ",arr1[i]);
	}
	
	printf("\n");
	
	printf("The reverse order of the array is:\n");
	for (i = 10; i >= 1; i --){
		printf("%3d ",arr1[i]);
	}
	return 0;
}
