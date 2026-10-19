#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	// calculating the time it takes for the user to complete the game.
	// using real world time rather than CPU time.
	// real-world time will measure thinking time, but CPU time measures computing time only.
	
	// time_t data type.
	
	srand(time(NULL)); // Gives a new number each time the program is run.
	int UserGuess, ComputerGuess, count = 0;
	double total_time_used;
	time_t start_time, end_time; // assign both variables to time() to get current time.
	ComputerGuess = (rand() % 10) + 1;
	printf("\n===WELCOME TO NUMBER GUESSING===\n\n");

	start_time = time(NULL); // start of the program and timer.
	while(1){
	printf("Enter a guess : ");
	scanf("%d",&UserGuess);
	if(UserGuess == ComputerGuess){
		printf("Congratulations!!! You guessed right\n");
		printf("ComputerGuess : %d\tUserGuess : %d\n",ComputerGuess, UserGuess);
		break;
	}
	else if(UserGuess > ComputerGuess){
		printf("Guess too high!!!\n");
		count ++;
	}else{
		printf("Guess too low!!!\n");
		count ++;
	}
}
end_time = time(NULL); // stop of program and end_time.

total_time_used = difftime(end_time , start_time);
printf("\n Attempts : %d",count);
printf("\n Total time taken : %.1lf sec",total_time_used);
	return 0;
}
