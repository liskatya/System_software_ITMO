#include <stdio.h>

int avg3(int a, int b, int c);

int main() {
    avg3(10, 20, 3);
    return 0;
}

int avg3(int a, int b, int c){
    return (a+b+c)/3;
}