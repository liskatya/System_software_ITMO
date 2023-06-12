int discriminant(int a, int b, int c) {
    return b*b - 4*a*c;
}

int root_count(int a, int b, int c) {
   int D = discriminant(a, b, c);
   if (D > 0) {
       return 2;
   }
   if (D < 0) {
       return 0;
   }
   else {
       return 1;
   }
}

int main() {
    // Считайте три числа в локальные переменные (см. предыдущий шаг)

    int a = read_int();
    int b = read_int();
    int c = read_int();


    // выведите результат запуска root_count с аргументами a, b и c.
    printf("%d", root_count(a, b, c));

    return 0;
}