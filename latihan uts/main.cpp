#include <iostream>

using namespace std;

void bubbleSort(int array[], int size) {
// loop to access each array element
    for (int step = 0; step < size - 1 ; ++step) {
// loop to compare array elements
        for (int i = 0; i < size - 1 - step; ++i) {
// compare two adjacent elements
            if (array[i] > array[i + 1]) {
// swapping elements if elements are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
// To sort in descending order, change > to < in this line.
// Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }
// put min at the correct position
        swap(array[min_idx], array[step]);
    }
}

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;
// Compare key with each element on the left of it until an element smaller than it is found.
// For descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}

// Merge two subarrays L and M into arr
void merge(int arr[], int l, int m, int r) {
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;

int L[n1], R[n2];

for(int i = 0; i < n1; i++){
    L[i] = arr[l + i];
}

for(int j = 0; j < n2; j++){
    R[j] = arr[m + 1 + j];
}

i = 0; j = 0; k = l;
while(i < n1 && j < n2){
    if(L[i]<=R[j]){
        arr[k] = L[i];
        i++;
    }else{
        arr[k] = R[j];
        j++;
    }
    k++;
}

while(i < n1){
    arr[k] = L[i];
    i++;
    k++;
}

while (j < n2){
    arr[k] = R[j];
    j++;
    k++;
}
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
// m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
// Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i+1);
}


void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi + 1, high);
    }
}

bool linearSearch(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}

bool binarySearch(int arr[], int x, int low, int high){
    if(high >= low){
        int mid = low + (high - low)/2;

        if(arr[mid] == x){
            return true;
        }

        if(arr[mid] > x){
            return binarySearch(arr, x, low, mid - 1);
        }

        return binarySearch(arr, x, mid + 1, high);
    }
    return false;
}


int main()
{
    int arr[] = {10, 3,6,6,8, 2, 9};
    int index = sizeof arr/sizeof arr[0];
    cout<<"Sebelum Sort: ";
    for(int i = 0; i < index; i++){
        cout << arr[i] <<", ";
    }
    //mergeSort(arr, 0, index-1);
    quickSort(arr, 0, index-1);
    cout << endl <<endl;
    cout<<"Setelah Sort: ";
    for(int i = 0; i < index; i++){
        cout << arr[i] <<", ";
    }
    cout <<endl<<endl<< linearSearch(arr, index, 56);
    cout <<endl<<endl<< binarySearch(arr, 3, 0, index - 1);

    return 0;
}
