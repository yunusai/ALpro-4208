#include <iostream>
using namespace std;

// Fungsi rekursif untuk pencarian biner

int binarySearchRecursive(int arr[], int left, int right, int key)
{
    if (right >= left) {
        int mid = left + (right - left) / 2; //0+4/2=2      //3+0,5= 3,5 =3   34
        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] > key) {
            return binarySearchRecursive(arr, left, mid - 1, key);
        }

        return binarySearchRecursive(arr, mid + 1, right, key);
    }
    return 0;
}

int main()
{
    int arr[] = { 2, 3, 12, 34, 54 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 340;

    int hasil = binarySearchRecursive(arr, 0, n - 1, key);
    if (hasil == 0) {
        cout << "Elemen tidak ditemukan dalam array." << endl;
    }
    else {
        cout << "Elemen ditemukan di indeks: " << hasil << endl;
    }
    return 0;
}
