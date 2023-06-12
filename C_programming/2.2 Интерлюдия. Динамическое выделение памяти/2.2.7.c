#include <inttypes.h>
#include <stdio.h>
// вы можете реализовать эти функции для более удобного считывания чисел
int64_t read_int64();
size_t read_size();

// заполнить уже выделенный массив array размера size числами
void array_int_fill( int64_t* array, size_t size ) {
  for(size_t i = 0; i < size; i++) {
      *array = read_int64();
      array++;
  }
}
// Считать размер массива в *size, выделить память под массив и заполнить его числами.
int64_t* array_int_read( size_t* size ) {
    *size = read_size();
    int64_t* arr = malloc(sizeof(int64_t) * *size);
    array_int_fill(arr, *size);
    return arr;
}

int64_t read_int64() {
    int64_t i64;
    scanf("%" SCNd64, &i64);
    return i64;
}
size_t read_size() {
    size_t size;
    scanf("%zu", &size);
    return size;
}