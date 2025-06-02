---
title: "C++ Header & Source Separation: Calculator Example"
date: 2025-05-31
tags: [C++, headers, source-separation, tutorial, CLI]
---

## 1. Function Declaration vs. Definition

- Declaration (in `calculator.h`):
  ```cpp
  #pragma once
  #include <iostream>

  int addition(int a, int b);
  int subtraction(int a, int b);
  int multiply(int a, int b);
  int division(int a, int b);
  int remainder(int a, int b);

#include "calculator.h"

int addition(int a, int b) 
{
  return a + b;
}
// … similarly for subtraction, multiply, division, remainder …

## 2. Main program in main.cpp
only includes the header

```cpp
#include "calculator.h"

int main() {
  int a, b;
  char op;
  char quit = 'n';

  do {
    std::cout << "Enter expression (e.g. 10 + 3): ";
    std::cin >> a >> op >> b;

    int result = 0;
    bool valid = true;

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
    std::cin >> quit;
  } 
  
  while (quit == 'y' || quit == 'Y');

  return 0;
}

## 3. Compile & Link

```bash
g++ -c calculator.cpp  # produces calculator.o
g++ -c main.cpp        # produces main.o
g++ calculator.o main.o -o calc_sep
./calc_sep

## 4. Reflection

- Moved declarations into calculator.h for clearer separation and 
reusability.
- Updated main.cpp to only include calculator.h, making maintenance easier.