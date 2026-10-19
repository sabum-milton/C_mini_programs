#include <stdio.h>

// CALL BY VALUE
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Only the local copies 'a' and 'b' are changed here.
}

// CALL BY REFERENCE (Using Pointers)
void swapByReference(int *a, int *b) {
    int temp = *a; // *a gets the value at the address
    *a = *b;       // Overwrites value at address 'a' with value at 'b'
    *b = temp;     // Overwrites value at address 'b'
}

int main() {
    int x = 10, y = 20;
    printf("x = %d and y = %d",&x,&y);

    // 1. Trying Call by Value
    swapByValue(x, y);
    printf("After swapByValue: x = %d, y = %d\n", x, y); 
    // Output: x = 10, y = 20 (Original values did not change)

    // 2. Simulating Call by Reference (Passing addresses using '&')
    swapByReference(&x, &y);// memory addresses
    printf("After swapByReference: x = %d, y = %d\n", &x, &y); 
    // Output: x = 20, y = 10 (Original values successfully changed!)

    return 0;
}

