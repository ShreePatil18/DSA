#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> v, int s, int e)
{

    int mid = (s + e) / 2;

    int l1 = mid - s + 1;
    int l2 = e - mid;

    vector<int> prt1(l1);
    vector<int> prt2(l2);

    int idx = s;

    for (int i = 0; i < l1; i++)
    {
        prt1[i] = v[idx++];
    }

    idx = mid + 1;

    for (int i = 0; i < l2; i++)
    {
        prt2[i] = v[idx++];
    }

    int idx1 = 0;
    int idx2 = 0;
    idx = s;

    while (idx1 < l1 && idx2 < l2)
    {
        if (prt1[idx1] < prt2[idx2])
        {
            v[s++] = prt1[idx1++];
        }
        else
        {
            v[s++] = prt2[idx2++];
        }
    }

    while (idx1 < l1)
    {
        v[s++] = prt1[idx1++];
    }

    while (idx2 < l2)
    {
        v[s++] = prt2[idx2++];
    }
}

void mergesort(vector<int> v, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergesort(v, s, mid);
    mergesort(v, mid + 1, e);

    merge(v, s, e);
}

int main()
{

    vector<int> v{9, 5, 3, 2};

    mergesort(v, 0, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << v[i];
    }
}