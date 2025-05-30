---
title: "Operator Input & Switch-Case Calculator"
date: 2025-05-29
tags: [C++, control-flow, CLI, calculator]
---

1. **Parsing an Expression**  
Read a full expression like `10 + 3` in one line:  
```cpp
int a, b;
char op;
std::cin >> a >> op >> b;

2. **Dispatching with switch**
Use a switch(op) statement to call the correct arithmetic function:

int result = 0;
bool valid = true;

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

if (valid)
    std::cout << "Result: " << result << "\n";

3. **Error Handling**

Division & Remainder by Zero: Both division and remainder functions check b == 0, print an error message, and return 0.

Unknown Operator: The default branch in the switch catches any unsupported operator and notifies the user.

4. **Usage Example**
Compile and run the calculator:

$ g++ calculator.cpp -o calc
$ ./calc
Enter expression (e.g. 10 + 3): 10 / 0
ERROR: Denominator can't be 0






