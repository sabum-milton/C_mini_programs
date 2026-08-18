/* File: search_element.c
content: Searching an element an element in an array.
*/

#include<stdio.h>
int main(){
	int arr1[10] = {10,40,60,2,6,40,4,8,9,100};
	int i, elt,m= 0;
	printf("Enter an element to find in array: \n");
	scanf("%d",&elt);
	for (i = 0; i < 10; i ++){
		if(elt == arr1[i])
			printf("The element: %d is found at position: %d\n",elt,i+1);
			m = 1;
		}

	return 0;
}
