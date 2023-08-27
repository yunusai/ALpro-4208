#include <iostream>

using namespace std;

void bubbleRecur(int a[], int n){
    if(n<0){
        return;
    }

    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i+1]){
        swap(a [i], a[i+1]);
        }
    }

    bubbleRecur(a, n-1);
}

int main()
{
    int arr[] = {5, 2, 45,231 ,53, 1,2};
    int n = sizeof(arr)/sizeof arr[0];
    bubbleRecur(arr, n);

    for(int i = 0; i<n;i++){
        cout<< arr[i] <<",";
    }
    return 0;
}
