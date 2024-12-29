#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            if (j == 0 || j == i)
            {
                cout << "*";
            }

            else if (i == n - 1)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}