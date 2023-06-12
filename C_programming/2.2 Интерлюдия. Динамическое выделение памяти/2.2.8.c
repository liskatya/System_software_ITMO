#include <inttypes.h>
#include <stdio.h>

int64_t* array_int_min( int64_t* array, size_t size ) {
    if(size <= 0) { return NULL; }
    else {
        int64_t* min = array;
        for(size_t i = 0; i < size; i = i + 1) {
            if(*array < *min) {
                min = array;
            }
            array++;
        }
        return min;
    }
}

