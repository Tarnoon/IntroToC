/*
Assignment:  Laboratory Assignment 14 "pl14"
Filename:    pl14.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>

#include <math.h>

int to_int(unsigned short num, int left, int right, int offset)
{
    int ans = 0;

    for (int i = right; i <= left; ++i)
    {

        if (num & (1 << (i)))

            ans |= (1 << (i - offset));
    }

    return ans;
}

int main()
{

    printf("Enter 16 bit binary Representation: ");

    char bin[17];

    scanf("%16s", bin);

    printf("%s\n", bin);

    unsigned short num = 0;

    for (int i = 0; i < 16; ++i)
    {

        if (bin[i] == '1')
        {

            num |= (1 << (15 - i));
        }
    }

    printf("Unsigned short: %hu\n", num);

    short sign = (bin[0] == '1') ? -1 : 1;

    short exponent = to_int(num, 14, 10, 10);

    short fraction_bit = to_int(num, 9, 0, 0);

    float ans = 1.0;

    if (exponent == ((1 << 5) - 1))
    {

        if (sign == -1)
        {

            printf("-");
        }

        printf("infinity\n\n");

        return 0;
    }

    else if (exponent == 0)
    {

        ans = (ans * pow(2, -14) * fraction_bit / (1 << 10));
    }

    else
    {

        ans = (ans * pow(2, exponent - 15) * (1.0 + fraction_bit * 1.0 / (1 << 10)));
    }

    printf("float value: %.16f\n\n", sign * ans);

    return 0;
}