#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> sss, int x)
{
    if (sss.empty())
    {
        sss.push(x);
        return;
    }

    int num = sss.top();
    sss.pop();

    solve(sss, x);

    sss.push(num);
}
int main()
{

    stack<int> s;
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);

    solve(s, 7);

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}