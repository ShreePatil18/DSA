#include <iostream>

using namespace std;

int main()
{
    int arrr[4] = {1, 2, 3, 4};

    for (int i = 1; i < 4; i++)
    {
        if (arrr[i] != arrr[i - 1] + 1)
        {
            cout << arrr[i - 1] + 1;
            break;
        }
    }
}