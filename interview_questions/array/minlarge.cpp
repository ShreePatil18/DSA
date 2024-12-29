#include <iostream>

using namespace std;

int main()

{

    int arr[4] = {5, 6, 7, 2};
    int min = 10000;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > 4 && arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min;
}