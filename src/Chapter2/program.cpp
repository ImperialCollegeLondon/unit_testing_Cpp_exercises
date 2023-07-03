#include "fibonacci.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: Must provide an integer as an argument\n";
        return 1;
    }

    int n = std::stoi(argv[1]);
    std::cout << "Fib(" << n << "): " << recursive_fibonacci(n) << "\n";
}
