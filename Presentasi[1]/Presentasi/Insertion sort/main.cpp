#include <iostream>

using namespace std;
void insertion(int arr[], int n) {
    if (n <= 1) {
        return;
    }
    insertion(arr, n - 1);  //arr,4  arr,3    arr,2
    int last = arr[n - 1];
    int beforelast = n - 2;
    while (beforelast >= 0 && arr[beforelast] > last) {
        swap(arr[beforelast + 1],arr[beforelast]);
        beforelast--;
    }
    arr[beforelast + 1] = last;
}
int main()
{
    int arr[] = {23,1,21,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "unsorted array : "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "   " <<endl;
    cout << "insertion sort : "<<endl;
    insertion(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "   " <<endl;
    return 0;
}
