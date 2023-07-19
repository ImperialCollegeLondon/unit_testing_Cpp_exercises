#include "fibonacci.h"
#include <stdexcept>

// Returns the n-th term of the Fibonacci sequence.
int recursive_fibonacci(int n)
{
    if (n < 0)
    {
        throw std::invalid_argument("Input must be a non-negative number");
    }
    else if (n <= 1)
    {
        return n;
    }
    else
    {
        return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
    }
}
