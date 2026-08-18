/* File: sum_array.c

content: sum up all the elements of an array.
*/

#include <stdio.h>
int main(){
	int arr1[10],i,sum = 0;
	printf("Enter the elements of the array:");
	for(i = 0; i < 10; i ++){
		scanf("%d",&arr1[i]);
	}
	printf("The sum of all elements of the array is:\n");
	for (i = 0; i < 10; i ++){
		sum = sum + arr1[i];
	
		}
	printf("%d ",sum);
return 0;
}
