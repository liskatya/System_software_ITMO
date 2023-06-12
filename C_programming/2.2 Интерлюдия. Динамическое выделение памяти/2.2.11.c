#include <inttypes.h>
#include <stdio.h>

void marray_free( int64_t** marray, size_t rows ) {
    if(marray == NULL) return;
    for(size_t i = 0; i < rows; i++) {
       if(marray[i] == NULL) continue;
       free(marray[i]);
    }
    free(marray);
    free(&rows);
}