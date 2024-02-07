#include <stdio.h>

// Function to find the nth Fibonacci number
int fib(int n);


int main(void)
{
    int n = 8;
    printf("F(n) = %d", fib(n));

    return 0;
}
int fib(int n)
{
    if (n <= 1) {
        return n;
    }

    int previousFib = 0, currentFib = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int newFib = previousFib + currentFib;
        previousFib = currentFib;
        currentFib = newFib;
    }

    return currentFib;
}
