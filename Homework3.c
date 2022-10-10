#include <stdio.h>
#include <math.h>

// prototype for distance function
double discriminant_func(double a, double b, double c);

// begins program execution and gets user input- No globals
int main(void)
{

    double a, b, c;
    double current_d, current_root1, current_root2;

    printf("In this program you will enter your desired numbers for a,b, and c.\n ");
    printf("The program will then calculate the quadratic equation and print the solutions to the screen.");

    printf(" Please enter a number for A. ");
    scanf("%lf", &a);
    printf("You have entered: %.2lf ", a);

    if (a == 0)
    {
        printf("I am sorry A cannot equal 0, that is not a quadratic equation.\n Please solve the linear equation elsewhere. ");
    }
    else
    {
        printf(" Please enter a number for B. ");
        scanf("%lf", &b);
        printf("You have entered: %.2lf ", b);

        printf(" Please enter a number for C. ");
        scanf("%lf", &c);
        printf("You have entered: %.2lf ", c);
    }

    // call your discriminant function here.
    // current_d = discriminant_func(a, b, c);

    // Check for D being positive or negative
}

double discriminant_func(double a, double b, double c)
{
    double d, root1, root2;

    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("The roots are real numbers.\n");
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the quadratic equation are: %.3f , %.3f", root1, root2);

        return 0;
    }
}

double equal_roots(double a, double b, double c)
{
    double d, root1, root2;
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        printf("Both of the roots are equal and thus repeated. ");
        double root1 = -b / (2 * a);
        printf("The repeated root of the quadratic equation is: %.3lf ", root1);

        return 0;
    }
}

double complex_roots(double a, double b, double c)
{
    double d, root1, root2;
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("The roots are complex numbers.\n");

        printf("The complex number roots of the quadratic equation are: ");
        printf("%.3lf%+.3lfi", -b / (2 * a), sqrt(-d) / (2 * a));
        printf(", %.3lf%+.3lfi", -b / (2 * a), -sqrt(-d) / (2 * a));

        return 0;
    }
}

/*eof*/

/*
Description/Requirements
You will write a program to solve quadratic equations

Your program will ask the users for the coefficients a, b, and c, and will then calculate and print both roots (solutions) for x, even if they are complex numbers.

Your program should  print an error if  a = 0.

If the roots are a pair of real numbers that differ, both should be displayed.

If there is only one (repeated) root, it should be displayed and the user should be told that it is a repeated root. • If the solution is a pair of complex numbers, they should be displayed in the form x = P + Qi and x = P −Qi where P and Q real numbers, and the symbol “i” represents the square root of -1.

It is strongly advised that you create a function to return the value of the “discriminant”, which is b2 −4ac

You may NOT use global variables.
Recall that solutions to a quadratic equation of the form

ax2 + bx + c = 0, where
a, b and c are real numbers and
a != 0

*/
