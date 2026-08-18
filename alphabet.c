#include <stdio.h>
int main(){
	int i,j;
	int arr1[3][3], arr2[3][3], ans[3][3];
	// Getting the elements from the user.
	printf("Enter the elements of matrix 1 (3x3):");
	for ( i = 0; i < 3; i ++){
		for (j = 0; j < 3; j ++){
			scanf("%d",&arr1[i][j]);
		}
	}
	
	
	printf("Dsiplaying the matrix to the user.\n");
	
	for (i = 0; i < 3; i ++){
		for ( j = 0; j < 3; j ++){
			printf("%2d",arr1[i][j]);
		}
		printf("\n");
	}
	
	
		printf("Enter the elements of matrix 2 (3x3):");
	for ( i = 0; i < 3; i ++){
		for (j = 0; j < 3; j ++){
			scanf("%d",&arr2[i][j]);
		}
	}
	
	
	printf("Dsiplaying the matrix to the user.\n");
	
	for (i = 0; i < 3; i ++){
		for ( j = 0; j < 3; j ++){
			printf("%2d",arr2[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Below is the product of both matrices.\n");
	
	for ( i = 0; i < 3; i ++){
		for (j = 0; j < 3; j ++){
			ans[i][j] = arr1[i][j] * arr2[j][i];
			printf("%2d",ans[i][j]);
		}
		printf("\n");
	}
	
	
		return 0;
}
