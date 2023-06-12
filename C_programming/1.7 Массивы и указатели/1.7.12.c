void array_fib(int* array, int* limit) {
    if(limit == array) {return;}
    int* a;
    if(limit - array >= 1) {        
        *array = 1;
    }
    if(limit - array >= 2) {
        a = array + 1;
        *a = 1;
        a += 1;
        if(limit - array > 2) {
        for(int* curr = a; curr < limit; curr++){
            *curr = *(curr-1) + *(curr-2);
            }
        }
    }
    return;
}
