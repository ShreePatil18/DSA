#include <iostream>

using namespace std;

int main()

{

    string s = "abd";
    string f = "aabbac";

    int j = 0;
    int n1 = s.length();
    int n2 = f.length();

    for (int i = 0; i < n2; i++)
    {
        if (s[j] == f[i])
        {
            j++;
        }

        if (j >= n1)
        {
            cout << "substring";
            return 0;
        }
    }

    cout << "no substring";
}