// Header files
#include <stdio.h>
// main function.
int main() {
	
	// variable declarations.
	int position,row, column, position1;
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
        if(i < 2){
        printf("-------------\n");
    }
    }
    
// getting player1 position.
while(1){
    printf("Player 1, Enter position:");
    scanf("%d",&position);
    
//validating the position.
    while(position < 1 || position > 9)
	{
		printf("Invalid position: Enter a position (1- 9):");
		scanf("%d",&position);
	}
	 
	row = (position - 1) / 3;
	column = (position - 1) % 3;
	// displaying the input on the board.
	
	board[row][column] = 'X';
		
    // regenerating back the board.
       for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
        if(i < 2){
        printf("-------------\n");
    }
    }
  
  // taking player 2's input.  
    printf("Player 2, Enter a position (1-9): ");
    scanf("%d", &position1);

// validating the input.
while (position1 < 1 || position1 > 9) {
    printf("Invalid position. Enter a position (1-9): ");
    scanf("%d", &position1);
}
row = (position1 - 1)/3;
column = (position1 - 1) % 3;

// playing it on the board.
	
	// ensuring the position entered is empty
while(board[row][column] != ' '){
   	 printf("Player 2, Enter a new position (1-9):");
   	 scanf("%d",&position1);
   	 
   	 row = (position1 - 1)/3;
    column = (position1 - 1) % 3;
    	 
	}
	
	board[row][column] = 'O';
	// printing the board again.
       for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
        if(i < 2){
        printf("-------------\n");
    }
}

// Checking winning conditions

// Player 1 wins through rows
if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
    printf("Player 1 is the winner!");
    break;
}
else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
    printf("Player 1 is the winner!");
    break;
}
else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
    printf("Player 1 is the winner!");
    break;
}

// Player 1 wins through columns
else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
    printf("Player 1 is the winner!");
}
else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
    printf("Player 1 is the winner!");
    break;
}
else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
    printf("Player 1 is the winner!");
    break;
}

// Player 1 wins through diagonals
else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
    printf("Player 1 is the winner!");
    break;
}
else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
    printf("Player 1 is the winner!");
    break;
}

// Player 2 wins through rows
else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
    printf("Player 2 is the winner!");
    break;
}
else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
    printf("Player 2 is the winner!");
    break;
}
else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
    printf("Player 2 is the winner!");
    break;
}

// Player 2 wins through columns
else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
    printf("Player 2 is the winner!");
    break;
}
else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
    printf("Player 2 is the winner!");
    break;
}
else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
    printf("Player 2 is the winner!");
    break;
}

// Player 2 wins through diagonals
else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
    printf("Player 2 is the winner!");
    break;
}
else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
    printf("Player 2 is the winner!");
    break;
}

}
    return 0;
}

