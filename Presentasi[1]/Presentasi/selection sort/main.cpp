#include <iostream>
using namespace std;

void selecSortRec(int arr[], int n, int index = 0){
    if (index == n - 1)
        return;

    int minIndex = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    if (minIndex != index) {
        swap (arr[index],arr[minIndex]);
    }
    selecSortRec(arr, n, index + 1);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int main()
{
    int arr[]={18,23,11,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    selecSortRec(arr, n);

    cout << "Array setelah diurutkan : ";
    printArray(arr, n);
    return 0;
}
