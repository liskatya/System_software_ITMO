#include <stdio.h>

void f(int a, int b);

int main() {
    f(10, 20);
    return 0;
}

void f(int a, int b){
    printf("%d", a+b);
}
