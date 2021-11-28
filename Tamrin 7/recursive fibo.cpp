#include <iostream>

using namespace std;

long int fibo(long int n);

int main()
{
    for (size_t i = 0; fibo(i) < 1000; i++)
    {
        cout << "Fibonacci ( " << i << ") = " << fibo(i) << endl;
    }
    return 0;
}

long int fibo(long int n)
{
    if ((n == 0) || (n == 1))
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

