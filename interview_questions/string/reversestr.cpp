#include <iostream>
using namespace std;

int main()
{
    string s = "abc";

    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }

    cout << s << endl;
    // using 2 pointer
    int f = 0;
    int e = n - 1;

    while (f <= e)
    {
        swap(s[f], s[e]);
        f++;
        e--;
    }

    cout << s << endl;
}