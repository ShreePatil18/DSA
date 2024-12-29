#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 9, 6};
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }

        else if (v[i] < min)
        {
            min = v[i];
        }
    }

    cout << "min" << min << endl;
    cout << "max<" << max << endl;
}