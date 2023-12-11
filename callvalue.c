#include <stdio.h>

void modifyValue(int x) {
    x = 10; // Changes the local copy of x, not the original x
   
}

int main() {
    int num = 5;
    modifyValue(num);
   printf("Value after function call: %d\n", num);
 // Outputs 5, not 10
    return 0;
}
