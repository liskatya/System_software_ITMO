void normalize(int* px) {
   while(*px > 0 && *px % 2 == 0 ) {
       *px = *px / 2;
   }
}