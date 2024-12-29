#include <iostream>
using namespace std;

int countch(string s, int n, char ch)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            c++;
        }
    }

    return c;
}
int main()
{

    string s = "aaabbcaa";

    int n = s.length();

    cout << countch(s, n, 'a');
}
