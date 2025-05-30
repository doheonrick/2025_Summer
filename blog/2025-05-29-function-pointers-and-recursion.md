---
title: "Function Pointers & Recursion in CLI Calculator"
date: 2025-05-29
tags: [C++, function-pointers, recursion, CLI, calculator]
---

## 1. Function Pointers for Operation Dispatch

Instead of a `switch`, map operator characters to functions via pointers:

```cpp
using OpFunc = int(*)(int,int);

OpFunc getOp(char op) {
    switch (op) {
        case '+': return addition;
        case '-': return subtraction;
        case '*': return multiply;
        case '/': return division;
        case '%': return remainder;
        default:  return nullptr;
    }
}
Call the correct function with getOp(op)(a, b).

## 2. Declaring & Using Function Pointers
Declaration
int (*fp)(int, int);

Assignment
fp = addition; // or &addition

Invocation
int result = fp(a, b);

## 3. Integrating into the Calculator

Replace switch in main() with pointer logic:
OpFunc fp = getOp(op);
if (fp == nullptr) {
    std::cout << "ERROR: Unknown operator '" << op << "'\n";
}
else if ((op == '/' || op == '%') && b == 0) {
    std::cout << "ERROR: Denominator can't be 0\n";
}
else {
    std::cout << "Result: " << fp(a, b) << "\n";
}

4. Recursion Example: Factorial Function

Show recursion with a simple factorial:
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Usage:
std::cout << "5! = " << factorial(5) << "\n"; // prints 5! = 120

##Reflection & Next Steps
- Learn to declare and use function pointers
- Simplify dispatch logic by mapping operators to functions
- Implement a recursive factorial example
