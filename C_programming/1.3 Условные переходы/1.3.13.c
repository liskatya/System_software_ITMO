#include <stdio.h>

void fizzbuzz(int a);

int main() {
    fizzbuzz(12);
    return 0;
}

void fizzbuzz(int a) {
    if (a > 0){
        if (a%3 == 0) {
        printf("fizz");
        }
        if (a%5 == 0) {
        printf("buzz");
        }
    }
    else {
        printf("no");
    }
}