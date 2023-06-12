void factorize( int n, int* a, int* b )
{
    for(int i = 2; i <= n/2; i++){
        if(!(n%i)) {
            *a = i;
            *b = n/(*a);
            return;
        }
    }
    *a = 1;
    *b = n;
}