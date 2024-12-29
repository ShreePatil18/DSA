// max heap implementation using array
#include <iostream>

using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        // incrementing size to get the last position
        size = size + 1;
        int index = size;
        // assigning the last position to that element
        arr[index] = val;

        // using loop to get to the last possible position
        while (index > 1)
        {
            int parent = index / 2; // property of max heap child node should be less the parent node
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }

            else
            {
                return;
            }
        }
    }

    void deleteheap()
    {
        if (size == 0)
        {
            cout << "nothing to delete";
        }

        arr[1] = arr[size];

        size--;

        int i = 1;
        while (i < size)
        {
            int li = 2 * i;
            int ri = 2 * i + 1;
            if (li < size && arr[li] > arr[i])
            {
                swap(arr[i], arr[li]);
                i = li;
            }

            else if (ri < size && arr[ri] > arr[i])
            {
                swap(arr[i], arr[ri]);
                i = ri;
            }

            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << "-->";
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int li = 2 * i;
    int ri = 2 * i + 1;

    if (li <= n && arr[largest] < arr[li])
    {
        largest = li;
    }

    if (ri <= n && arr[largest] < arr[ri])
    {
        largest = ri;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    int t = n;
    while (t > 1)
    {
        swap(arr[t], arr[1]);

        t--;
        heapify(arr, t, 1);
    }
}

int main()
{
    heap h1;
    h1.insert(23);
    h1.insert(45);
    h1.insert(11);
    h1.insert(10);
    h1.deleteheap();
    h1.print();

    cout << endl
         << "Heapify";
    int arr[] = {-1, 23, 45, 34, 56, 3};
    int n = 6;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int j = 1; j <= n; j++)
    {
        cout << arr[j] << "-->";
    }
    cout << endl
         << "Heap sort ";

    heapsort(arr, n);
    for (int j = 1; j <= n; j++)
    {
        cout << arr[j] << "-->";
    }
}