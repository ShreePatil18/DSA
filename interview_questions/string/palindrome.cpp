#include <iostream>
using namespace std;

int main()
{

    string s = "abba";
    int n = s.length();
    int f = 0;
    int e = n - 1;
    while (f <= e)
    {
        if (s[f] != s[e])
        {
            cout << "no palindrome" << endl;
            return -1;
        }

        f++;
        e--;
    }

    cout << "yes palindrome";
}