#include <stdio.h>
int main(){
	 int user_start, i;
	 printf("Enter value for start of timer: ");
	 scanf("%d",&user_start);
	 for(i = user_start; i >= 0; i --){
	 	printf("%d\n",i); 
	 	if(i == user_start/2){
	 		printf("half way gone!!");
		 }
		 
	 }
	return 0;
}
/* a countdown timer or a time simulation. */
