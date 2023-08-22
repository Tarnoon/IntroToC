/*
Assignment:  Laboratory Programming Exercise 12 "pl12"
Filename:   pl12.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 1000

int main(void)
{
    double x[ARRAY_SIZE];
    double y[ARRAY_SIZE];
    int n = 0;
    FILE *fPtr;
    if ((fPtr = fopen("signal.dat", "r")) == NULL)
    {
        puts("File could not be opened");
        return 1;
    }
    else
    {
        while (n < ARRAY_SIZE && fscanf(fPtr, "%lf", &x[n]) == 1)
        {
            n++;
        }
        fclose(fPtr);

        int N = 10;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i >= N)
            {
                sum -= x[i - N];
            }
            sum += x[i];
            if (i >= N - 1)
            {
                y[i] = sum / (double)N;
                printf("%.2lf\n", y[i]);
            }
        }
    }
    return 0;
}