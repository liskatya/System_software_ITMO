#include <stdio.h>

void greet( int n ) {
   printf("Hello ");
   printf("%d", n);
   printf("\n");
}

int main() {
    greet(10);
    greet(10+10);
    greet(42);
}