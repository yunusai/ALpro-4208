#include <iostream>
using namespace std;

// fungsi rekursif pencarian linear

int linearSearchRecursive(int arr[], int n, int key, int index)
{
    if (index >= n)
    {
        return 0;
    }
    if (arr[index] == key)
    {
        return index;
    }
    return linearSearchRecursive(arr, n, key, index + 1);
}

int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 54;

    int result = linearSearchRecursive(arr, n, key, 0);
    if (result == 0)
    {
        cout << "Elemen tidak ditemukan dalam array." << endl;
    }
    else
    {
        cout << "Elemen ditemukan di indeks: " << result << endl;
    }
    return 0;
}
