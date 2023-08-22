/*
Assignment:  Laboratory Assignment 02 "Hours, Mins, Seconds"
Filename:    time.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
int main()
{
    int x, seconds, hours, minutes;

    printf("Enter seconds\n");
    // x = 4000;
    scanf("%d", &x);

    hours = (x / 3600);

    printf("Hours: %d\n", hours);

    minutes = (x - (3600 * hours)) / 60;
    printf("Minutes: %d\n", minutes);

    seconds = (x - (3600 * hours)) - (minutes * 60);
    printf("Seconds: %d\n", seconds);

    return 0;
}
