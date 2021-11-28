#include <iostream>

using namespace std;
int fibo(int n);

int main()
{
    int n;
    cout << "Please enter your input : ";
    cin >> n;

    for (size_t i = 0; i <= n; i++)
    {
        cout << "Fibonacci ( " << i << ") = " << fibo(i) << endl;
    }
}

int fibo(int n)
{
    if ((n == 0) || (n == 1))
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}
