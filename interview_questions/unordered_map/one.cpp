#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    char arr[5] = {'r', 'p', 'w', 'b', 'b'};
    unordered_map<char, int> res;

    for (int i = 0; i < 5; i++)
    {
        res[arr[i]]++;
    }
    for (auto x : res)
    {
        if (x.second % 2 == 0)
        {
            continue;
        }

        else
        {
            cout << x.first;
        }
    }
}