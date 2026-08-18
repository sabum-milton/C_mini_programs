/* File: even_array_elements.c

content: printing all the even elements of a single dimensional array.
*/

#include<stdio.h>
int main(){
	int n, arr[n],i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n\n");
	for ( i = 0; i < n; i ++){
		scanf("%d",&arr[i]);
	}
	
	printf("The elements of the array is:\n\n");
	for ( i = 0; i < n; i ++){
		printf("%3d",arr[i]);
	}
	
	printf("\n");
	


	printf("The even elements of the array is: \n");
	for (i = 0; i < n; i ++){
		if(arr[i] % 2 == 0){
			printf("%d ",arr[i]);
		}
	}
	
	printf("\n");
	
	printf("The odd elements of the array is :");
	for ( i = 0; i < n; i ++){
		if(arr[i] % 2 != 0){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
