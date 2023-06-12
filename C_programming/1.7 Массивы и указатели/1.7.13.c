// position -- адрес указателя на первый элемент E в массиве,
// для которого predicate(E) выполняется.
// Функция возвращает 0 если элемент не найден.
int array_contains(int* array, int* limit, int** position) {
   *position = array;
   for(int* curr = array+1; curr < limit; curr++) {
       if (predicate(*curr)) {
           *position = curr;
           return 1;
   }
   }
   return 0;
}