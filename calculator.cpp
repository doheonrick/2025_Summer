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
        std::cout << "ERROR: Denominator can'y be 0. \n";
        return 0; 
    }

    return a / b;
}

int remainder(int a, int b)
{
    if (b == 0)
    {
        std::cout << "ERROR: Denominator can'y be 0. \n";
        return 0; 
    }

    return a % b;
}

int main()
{
    int a, b;
    char op;
    std::cout << "Enter expression (e.g. 10 + 3): ";
    std::cin >> a >> op >> b;

    int result = 0;
    bool valid = true;
    
    switch(op)
    {
        case '+':
            result = addition(a, b);
        case '-':
            result = subtraction(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            result = division(a, b);
            break;
        case '%':
            result = remainder(a, b);
            break;
        default:
            std::cout << "ERROR: Unknown operator '" << op << "'\n";
            valid = false;
            break;
    }

    if (valid)
    {
        std::cout << "Result: " << result << "\n";
    }

    return 0;
}