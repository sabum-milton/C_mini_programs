/* File: addition_array.c

content: Addition of two single dimensional array.
*/

#include <stdio.h>
int main(){
	int arr1[3],arr2[3],add[3],i;
	for (i = 0; i < 3; i ++){
	printf("Enter the elements of arr1[%d]\n",i);
	scanf("%d",&arr1[i]);
}
printf("\n\n");
  	for (i = 0; i < 3; i ++){
	printf("Enter the elements of arr2[%d]\n",i);
	scanf("%d",&arr2[i]);
}
printf("The sum of arr1[3] and arr2[3] is:\n");
for (i = 0; i < 3; i ++){
	add[i] = arr1[i] + arr2[i];
}
for ( i = 0; i < 3; i ++){
	printf("%d ",add[i]);
}
return 0;
}
