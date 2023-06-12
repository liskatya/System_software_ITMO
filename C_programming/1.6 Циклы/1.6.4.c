int is_square(int x) {
    int h = x/2;
    int i = 0;
    while(i <= h || i == 1){
        if(i*i == x){
            return 1;
        }
        i++;
    }
    return 0;
}