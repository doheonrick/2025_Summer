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

int main()
{
    int a, b;
    char op;

    char quit = 'n';
    do
    {
        std::cout << "Enter expression (e.g. 10 + 3): ";
        std::cin >> a >> op >> b;

        int result = 0;
        bool valid = true;

        // check division/modulo by zero before dispatch
        if ((op == '/' || op == '%') && b == 0)
        {
            std::cout << "ERROR: Denominator can't be 0\n";
            valid = false;
        }
        else
        {
            switch (op)
            {
                case '+': result = addition(a, b);    break;
                case '-': result = subtraction(a, b); break;
                case '*': result = multiply(a, b);    break;
                case '/': result = division(a, b);    break;
                case '%': result = remainder(a, b);   break;
                default:
                    std::cout << "ERROR: Unknown operator '" << op << "'\n";
                    valid = false;
            }
        }

        if (valid)
        {
            std::cout << "Result: " << result << "\n";
        }

            std::cout << "Compute another? (y/n): ";
            std::cin  >> quit;
    } 
    
    while (quit == 'y' || quit == 'Y');
    
    return 0;
}