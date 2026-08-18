/* File: max_min_array.c
content: printing the maximum and minimum values of a single dimensional array.
*/

#include<stdio.h>
int main(){
	int arr[10] = {10,23,11,12,67,90,34,89,2,4};
	int max = 0, min = 10, i;
	for (i = 0 ;i < 10; i ++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("The max value is : %d\n",max);
	
	for ( i = 0; i < 10; i ++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("The min value is: %d",min);
	
	return 0;
}
