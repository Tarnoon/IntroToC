/*
Assignment:  Laboratory Programming Exercise 03 "Roots of a second-order polynomial (Branches)"
Filename:   polynomialroots.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c;
    double discriminant;
    double root1, root2;
    double realPart, imaginaryPart;

    // printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 && b == 0)
    {
        printf("Polynomial is degenerate.\n");
        return 0;
    }
    else if (a == 0)
    {
        printf("Polynomial has one real root x = %.6lf \n", (-c / b));
    }
    if (a != 0)
    {
        discriminant = b * b - 4 * a * c;
        if (discriminant == 0)
        {
            root1 = root2 = -b / (2 * a);
            printf("Polynomial has two real and equal roots = %.6lf\n", root1);
        }

        else if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Polynomial has two real roots = %.6lf %.6lf\n", root1, root2);
        }
        else
        {
            realPart = -b / 2 * a;
            imaginaryPart = sqrt(-discriminant) / (2 * a);

            printf("Polynomial has two complex roots = %.6lf + %.6lfi and %.6lf - %.6lfi\n",
                   realPart, imaginaryPart, realPart, imaginaryPart);
        }
    }

    return 0;
}