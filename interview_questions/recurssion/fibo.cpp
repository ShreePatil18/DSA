#include <iostream>
#include <vector>
using namespace std;

int fibo(int n)
{
    int nn = n;
    vector<int> f(n + 2);
    int i;
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    // for (i = 0; i <= n; i++)
    // {
    //     cout << f[i] << "-->";
    // }

    return f[n];
}

int fib_rec(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib_rec(n - 1) + fib_rec(n - 2);
}
int main()

{

    cout << fibo(9) << endl;

    cout << fib_rec(9);
}