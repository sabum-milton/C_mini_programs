/* performing a linear search in an array.

A linear search is an algorithm use to find a target value within a collection of data.

Linear search checks every single item sequentially from start to finish. it compares the target to every element in the array turn by turn,
if there's a match then it stops else it compares it with the next element.
*/

#include<stdio.h>
int main(){
	int target = 7, i ;
	int arr1[10] = {10,20,30,40,50,60,70,80,90,100};
	printf("The unsorted array is:\n ");
	for (i = 0; i < 10; i ++){
		printf("%d ",arr1[i]);
	}
	printf("\n");
	
	printf("The result\n");
	for ( i = 0; i < 10; i ++){
		if(arr1[i] == target){
			printf("Element: %d found at location: %d\n",target,i+1);
			break;
		}
		if (i == arr1[10])
			printf("%d is not found in the array",target);
	}
	return 0;
}
