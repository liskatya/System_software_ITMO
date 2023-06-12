#include <inttypes.h>
#include <stdio.h>

// эти функции вы уже реализовали на предыдущих шагах
// можете их использовать, они вам уже доступны.
int64_t* array_int_read( size_t* size );
int64_t* array_int_min( int64_t* array, size_t size); 

// Выводит None если x == NULL, иначе число, на которое указывает x.
void intptr_print( int64_t* x ) {
    if(x==NULL) {
        printf("None");
    }
    else {
        printf("%"PRId64, *x);
    }
}

void perform() {
    size_t sz;
    int64_t* array = array_int_read(&sz);
    if(array == NULL) { 
      printf("None");
    }
    else {
    int64_t* min = array_int_min(array, sz);
    intptr_print(min);
    }
    free(array);
}