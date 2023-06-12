#include <inttypes.h>
#include <stdio.h>

size_t count_zeroes(const void* data, size_t sz ) {
    const char* d = data;
    int16_t cnt = 0;
    for(size_t i = 0; i < sz; i++) {
        if(d[i] == 0) {
            cnt++;
        }
    }
    return cnt;
        
}