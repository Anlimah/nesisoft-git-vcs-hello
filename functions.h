// declarations of functions used in the project
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#endif // FUNCTIONS_H

// declare arithmetic functions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return static_cast<double>(a) / b;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
