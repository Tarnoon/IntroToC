/*
Assignment:  Laboratory Assignment 04 "Hailstone sequence"
Filename:    hailstormsequence.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
int main()
{
    int n;
    int count = 1;

    scanf("%d",&n);
    printf("%d\t",n);

    while (n != 1 ){
        if (n % 2 == 0){
            n = n / 2;
        }
        else {
            n = (3 * n) + 1;
        }
        printf("%d\t",n);
        count++;
        if (count % 10 == 0) {
            printf("\n");
        }
    }

}