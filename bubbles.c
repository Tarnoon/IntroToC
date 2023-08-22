/*
Assignment:  Laboratory Programming Exercise 11 "Bubble Sort"
Filename:   bubbles.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max_size 100

void swap(int *element1Ptr, int *element2Ptr){
    int hold = *element1Ptr;                                  
    *element1Ptr = *element2Ptr;                            
    *element2Ptr = hold;
}

int main(void){
    int arr[max_size];
    int comparisons = 0;
    int exchanges = 0;

    srand(time(NULL));
    
    for (int i = 0; i < max_size; i++) {
        arr[i] = rand() % 100 + 1;
    }
    
    for (int i = 0; i < max_size - 1; i++) {
        for (int j = 0; j < max_size - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {       
                exchanges++;                
                swap(&arr[j], &arr[j+1]);                              
            }
        }
    }
    
    printf("\nNumber of exchanges: %d\n", exchanges);
    printf("Number of comparisons: %d\n", comparisons);
    
    return (0);
}