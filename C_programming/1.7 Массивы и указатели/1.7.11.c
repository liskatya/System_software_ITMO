void array_reverse(int* array, int size) {
    int temp = 0;
    int s = size - 1;
    for(int i = 0; i <= size/2; i++){
        temp = array[i];
        array[i] = array[s];
        array[s] = temp;
        s--;
    }
    
}

void array_reverse_ptr(int* array, int* limit) {
    int* l = limit - 1;
    int temp = 0;
    for(int* curr = array; curr <= l; curr++){
        temp = *curr;
        *curr = *l;
        *l = temp;
        l--;
    }
}