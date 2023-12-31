#include <inttypes.h>
#include <stdio.h>

// Вам доступны эти функции из прошлых заданий
size_t read_size();
void array_int_fill( int64_t* array, size_t size );
int64_t* array_int_read( size_t* size );

int64_t** marray_read( size_t* rows, size_t** sizes ) {
    *rows = read_size();
    int64_t** marr = malloc(sizeof(int64_t) * *rows); 
    *sizes = malloc(sizeof(size_t)* (*rows));
    for(size_t i = 0; i < *rows; i++) {
        //marr[i] = malloc(sizeof(int64_t) * *sizes[i]);
        marr[i] = array_int_read(*sizes+i);
    }
    return marr;
}

void marray_print(int64_t** marray, size_t* sizes, size_t rows) {
    for( size_t i = 0; i < rows; i = i + 1 ) {
        array_int_print( marray[i], sizes[i] );
        print_newline();
    }
}