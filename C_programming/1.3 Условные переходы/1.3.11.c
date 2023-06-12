#include <stdio.h>

int is_sorted3(int a, int b, int c);

int main() {
    int r = is_sorted3(3, 2, 1);
    printf("%d", r);
    return 0;
}

int is_sorted3(int a, int b, int c) {

  if(a > b && b > c) { return -1; }
  if(c > b && b > a) { return 1; }
  else {
      return 0; 
  }

}