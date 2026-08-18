#include <stdio.h>
int main(){
	int arr1[10],i;
	printf("Enter the elements of the array:");
	for(i = 0; i < 10; i ++){
		scanf("%d",&arr1[i]);
	}
	printf("The elements of the array are:");
	for(i = 0; i < 10; i ++){
		printf("%3d ",arr1[i]);
	}
	return 0;
}
