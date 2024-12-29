#include <iostream>
#include <vector>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int fact_dp(int n)
{
    vector<int> arr(n + 1);

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] * i;
    }

    return arr[n];
}
int main()

{

    cout << fact_dp(4);
}