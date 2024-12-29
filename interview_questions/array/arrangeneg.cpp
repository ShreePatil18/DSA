#include <iostream>

using namespace std;

int main()
{
    int arrr[4] = {1, 2, -3, -4};
    int j = 0;

    for (int i = 0; i < 4; i++)
    {
        if (arrr[i] <= 0)
        {
            swap(arrr[i], arrr[j]);
            j++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arrr[i] << " ";
    }
}