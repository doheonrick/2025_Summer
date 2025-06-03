---
title: "Advanced Functions & File I/O Demos"
date: 2025-06-02
tags: [C++, functions, file-io, tutorial]
---

## 1. Pass-by-Value vs. Pass-by-Reference

```cpp
#include <iostream>

void swapByValue(int a, int b) 
{
    int tmp = a; a = b; b = tmp;
}

void swapByRef(int &a, int &b) 
{
    int tmp = a; a = b; b = tmp;
}

int main() 
{
    int x = 5, y = 10;
    std::cout << "Before swapByValue: " << x << ", " << y << "\n";
    swapByValue(x, y);
    std::cout << "After swapByValue: " << x << ", " << y << "\n\n";

    std::cout << "Before swapByRef: " << x << ", " << y << "\n";
    swapByRef(x, y);
    std::cout << "After swapByRef: " << x << ", " << y << "\n";
    return 0;
}

## 2. Function Overloading

#include <iostream>

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    std::cout << "add(int, int)    = " << add(3, 5)   << "\n";
    std::cout << "add(double,double) = " << add(2.5, 4.5) << "\n";
    return 0;
}
