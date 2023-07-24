#include "fibonacci.h"

// Returns the n-th term of the Fibonacci sequence.
int recursive_fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
    }
}
