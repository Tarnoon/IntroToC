
#include <stdio.h>

int main(void) {
   int userInt;
   double userDouble;
   char userCh[10];
   char userString[10];
   // FIXME: Define char and string variables similarly
   
   printf("Enter integer:\n");
   scanf("%d", &userInt);

   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   printf("Enter double:\n");
   scanf("%lf", &userDouble);
   
   printf("Enter character:\n");
   scanf("%s", userCh);
   
   printf("Enter string:\n");
   scanf("%s", userString);
   
   printf("%d %lf %s %s\n", userInt, userDouble, userCh, userString);

   
  
  // FIXME (2): Output the four values in reverse
   printf("%s %s %lf %d\n",userString,userCh,userDouble,userInt);  
   
   // FIXME (3): Cast the double to an integer, and output that integer
   userInt = (int)userDouble;
   printf("%lf cast to an integer is %d\n",userDouble, userInt);
   
   return 0;
}