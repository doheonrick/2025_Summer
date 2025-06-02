#include <iostream>

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b == 0)
    {
        std::cout << "ERROR: Denominator can't be 0.\n";
        return 0; 
    }

    return a / b;
}

int remainder(int a, int b)
{
    if (b == 0)
    {
        std::cout << "ERROR: Denominator can't be 0.\n";
        return 0; 
    }

    return a % b;
}