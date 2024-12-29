#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int pivotindex = count + s;
    swap(arr[pivotindex], arr[s]);

    int i = s;
    int j = e;

    while (i < pivotindex && e > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotindex && e > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()

{
    int arr[4] = {9, 5, 4, 1};

    quicksort(arr, 0, 3);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
}