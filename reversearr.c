/*
Assignment:  Laboratory Assignment 06 "Reverse an Array"
Filename:    reversearr.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>

int ReverseArray(int arraySize, int numberArray[], int reversedArray[]) {

   for(int i = 0; i < arraySize; i++){
    reversedArray[i] = numberArray[arraySize - i - 1];
   }
   return arraySize;  
}

int main(void) {
    int arraySize = 10;
    int input[] = {1,2,6,4,8,5,9,7,8,10};
    int result[20];
    
    ReverseArray(arraySize, input, result);

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", result[i]);
        }
    printf("\n");
    return 0;
}