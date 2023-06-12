int is_prime(int x) {
    if(x>1) {
        for(int i = 2; i < x; i++) {
            if(!(x%i)) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}