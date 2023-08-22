#include <stdio.h>

int main(void) {
   int userInput;

   do{
   printf("Enter a number (<100):\n");
   scanf("%d",&userInput);
}
   while (userInput > 100);

   printf("Your number < 100 is: %d\n", userInput);

   return 0;
}