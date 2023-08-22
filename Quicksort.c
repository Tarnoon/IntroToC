/*
Assignment:  Laboratory Assignment 10 "Quicksort"
Filename:    quickstart.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
#include <math.h>

int count = 0;

double C(int N)

{

int k;

double result = 0;

count++;

if (N == 1 || N == 0) { /* base case, when C1 = C0 = 0 */

return 0;

}

for (k = 1; k <= N; k++) {

result += C(k - 1) + C(N - k); /* for N > = 2, recursion is used to find values of C(N) */

}

result /= N;

result = result + N + 1;

return result;

}

int main(void)

{

int i;

double result, aprx, err;

for (i = 1; i <= 20; i++) {

count = 0;

result = C(i); /* function call made to C ( int N) */

aprx = 2 * i * log(i); /* approximation of the function C(N) */

err = result - aprx; /* Calculating error */

err *= (err < 0) ? -1 : 1; /* absolute value of error */

printf("N:\t %2d, calls:\t %10d, C(N):\t %6.2f, aprx:\t %6.2f, err:\t %6.2f\n", i, count, result, aprx, err);

}

return 0;

}