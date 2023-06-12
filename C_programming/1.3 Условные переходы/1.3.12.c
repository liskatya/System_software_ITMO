#include <stdio.h>

int max3(int a, int b, int c);

int main() {
    printf("%d", max3(10, 193, 300));
    return 0;
}

int max3(int a, int b, int c) {
    
    if (a >= b) {
        if (a >= c) {return a; }
        else {return c; }
    }
    if (b >= c) {
        if (b >= a) {return b; }
        else {return a;}
    }
    else { return c; }
                                   
}