#include <stdio.h>

// 1. BACKWARD: Prints n, then calls itself for (n-1)
void PrintBackward(int n) {
    // Base case: stop when we go below 1
    if (n < 1) {
        return; 
    } 
    
    // Recursive case:
    printf("%d ", n);        // Print the current number FIRST
    PrintBackward(n - 1);    // Then call the next smaller number
}

// 2. FORWARD: Calls itself for (n-1) first, then prints n
void PrintForward(int n) {
    // Base case: stop when we go below 1
    if (n < 1) {
        return;
    }
    
    // Recursive case:
    PrintForward(n - 1);     // Go all the way to the bottom first
    printf("%d ", n);        // Print on the way back up (unwinding)
}

int main() {
    int num = 4;
    
    printf("Backward: ");
    PrintBackward(num);      // Output: 4 3 2 1
    
    printf("\nForward: ");
    PrintForward(num);       // Output: 1 2 3 4
    
    printf("\n");
    return 0;
}

