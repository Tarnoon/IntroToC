#include <stdio.h>

int main() {
   int stop;
   int result;
   int a;
   int b;

   scanf("%d", &stop);
   result = 0;

   for (a = 0; a < 4; ++a) {
      printf("%d: ", a);
      for (b = 0; b < 2; ++b) {
         result += a + b;
         if (result > stop) {
            printf("_ ");
            continue;
         }
         printf("%d,", result);
      }
      printf("\n");
   }
}