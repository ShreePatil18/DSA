#include <iostream>
#include <vector>

using namespace std;

int main()

{

    vector<int> arr = {3, 4, 5, 6, 7};

    int n = arr.size();

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        swap(arr[l], arr[r]);

        l++;
        r--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}