int main() {
    /* - прочитайте одно число i с помощью read_int
       - используя цикл while выведите числа от i до 10 включительно;
         после каждого числа должен стоять один пробел
       - если i > 10, выведите одно слово "No"
    */
    int i = read_int();
    if (i > 10) {
        printf("No");
    }
    while (i < 11) {
        printf("%d ", i);
        i++;
    }
    

    return 0;
}