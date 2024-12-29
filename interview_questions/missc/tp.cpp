#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int i = 1;
    int n = 10;
    priority_queue<int> pq;

    while (n > 0)
    {
        if (i == 1)
        {
            pq.push(i);
        }
        else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            pq.push(i);
        }
        n--;
        i++;
    }

    for (int j = 0; j < 10; j++)
    {
        cout << pq.top() << "-->";
        pq.pop();
    }
}