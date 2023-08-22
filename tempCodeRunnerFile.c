#include <stdio.h>

int main(void)
{
     FILE *fPtr;
     // fopen opens file; exits program if file cannot be opened
     if ((fPtr = fopen("signal.dat", "r")) == NULL) {
           puts("File could not be opened");
     }
     else {
           double sample;
           // while not end of file
           while (!feof(fPtr)) {
                fscanf(fPtr, "%lf", &sample);
                printf("%7.3f\n", sample);
           }
           fclose(fPtr); // fclose closes the file
     }
}