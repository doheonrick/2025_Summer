#include <iostream>

int main()
{
    // 1) for loop print 1~10
    std::cout << "1 to 10 with for loop: ";
    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << " ";
    }
    std::cout << "\n\n";

    // 2) while loop sum 1~10
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    std::cout << "Sum of 1 to 10 with while loop: " << sum << "\n\n";

    // 3) do-while loop repeat until user enters 0
    int num;
    do
    {
        std::cout << "Enter a number (0 to quit): ";
        std::cin >> num;
        if (num != 0)
            std::cout << "  You typed: " << num << "\n";
    } 
    while (num != 0);

    return 0;
}
