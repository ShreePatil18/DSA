#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> m;

    m["shreyash"] = 1;
    m["patil"] = 2;

    for (auto x : m)
    {
        cout << x.first;
    }
}
