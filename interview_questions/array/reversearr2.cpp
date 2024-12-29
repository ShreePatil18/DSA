#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int h = 4;
    int l = 0;

    while (l < h)
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}