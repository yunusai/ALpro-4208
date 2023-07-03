#include <iostream>
#include <chrono>

using namespace std;

void bubbleSort(int array[], int size)
{
    // loop to access each array element
    for (int step = 0; step < size - 1; ++step)
    {
        // loop to compare array elements
        for (int i = 0; i < size - 1 - step; ++i)
        {
            // compare two adjacent elements
            if (array[i] > array[i + 1])
            {
                // swapping elements if elements are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        // put min at the correct position
        swap(array[min_idx], array[step]);
    }
}

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        // Compare key with each element on the left of it until an element smaller than it is found.
        // For descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}

bool linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

bool binarySearch(int arr[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            return true;
        }

        if (arr[mid] > x)
        {
            return binarySearch(arr, x, low, mid - 1);
        }

        return binarySearch(arr, x, mid + 1, high);
    }
    return false;
}

int main()
{
    int arr[] = {10, 3, 6, 6, 8, 2, 9};
    int arr2[] = {10, 3, 6, 6, 8, 2, 9};
    int arr3[] = {10, 3, 6, 6, 8, 2, 9};
    int index = sizeof arr / sizeof arr[0];
    cout << "Sebelum Sort: ";
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl
         << "Ukuran array tersebut adalah sebesar = " << sizeof arr << " byte" << endl;
    // Bubble sort
    auto startBubble = std::chrono::steady_clock::now();
    bubbleSort(arr, index);
    auto endBubble = std::chrono::steady_clock::now();

    cout << endl;
    cout << "Setelah Sort: ";
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << ", ";
    }

    chrono::duration<double, milli> durationBubble = endBubble - startBubble;
    cout << endl
         << "Waktu eksekusi Bubble Sort: " << durationBubble.count() << " milidetik" << endl;

    // selection sort
    auto startSelection = std::chrono::steady_clock::now();
    selectionSort(arr2, index);
    auto endSelection = std::chrono::steady_clock::now();

    cout << endl;
    cout << "Setelah Sort: ";
    for (int i = 0; i < index; i++)
    {
        cout << arr2[i] << ", ";
    }

    chrono::duration<double, milli> durationSelection = endSelection - startSelection;
    cout << endl
         << "Waktu eksekusi Selection Sort: " << durationSelection.count() << " milidetik" << endl;

    // Insertion sort
    auto startInsertion = std::chrono::steady_clock::now();
    insertionSort(arr3, index);
    auto endInsertion = std::chrono::steady_clock::now();

    cout << endl;
    cout << "Setelah Sort: ";
    for (int i = 0; i < index; i++)
    {
        cout << arr3[i] << ", ";
    }

    chrono::duration<double, milli> durationInsertion = endInsertion - startInsertion;
    cout << endl
         << "Waktu eksekusi Insertion Sort: " << durationInsertion.count() << " milidetik" << endl;

    // Linear search jika yang dicari adalah angka di awal
    auto startLinearFirst = std::chrono::steady_clock::now();
    linearSearch(arr, index, 2);
    auto endLinearFirst = std::chrono::steady_clock::now();

    cout << endl
         << endl
         << "Apakah ditemukan(Linear Search awal)?" << linearSearch(arr, index, 2);

    chrono::duration<double, milli> durationLinearFirst = endLinearFirst - startLinearFirst;
    cout << endl
         << "Waktu eksekusi Linear Search ketika yg dicari di awal: " << durationLinearFirst.count() << " milidetik" << endl;

    // Linear search jika yang dicari adalah angka di akhir
    auto startLinearLast = std::chrono::steady_clock::now();
    linearSearch(arr, index, 10);
    auto endLinearLast = std::chrono::steady_clock::now();

    cout << endl
         << endl
         << "Apakah ditemukan(Linear Search akhir)?" << linearSearch(arr, index, 10);

    chrono::duration<double, milli> durationLinearLast = endLinearLast - startLinearLast;
    cout << endl
         << "Waktu eksekusi Linear Search ketika yg dicari di akhir: " << durationLinearLast.count() << " milidetik" << endl;

    // Binary search jika yang dicari adalah angka di awal
    auto startBinaryFirst = std::chrono::steady_clock::now();
    binarySearch(arr, 2, 0, index - 1);
    auto endBinaryFirst = std::chrono::steady_clock::now();

    cout << endl
         << endl
         << "Apakah ditemukan(Binary Search awal)?" << binarySearch(arr, 2, 0, index - 1);

    chrono::duration<double, milli> durationBinaryFirst = endBinaryFirst - startBinaryFirst;
    cout << endl
         << "Waktu eksekusi Binary Search ketika yg dicari di awal: " << durationBinaryFirst.count() << " milidetik" << endl;

    // Binary search jika yang dicari adalah angka di akhir
    auto startBinaryLast = std::chrono::steady_clock::now();
    binarySearch(arr, 10, 0, index - 1);
    auto endBinaryLast = std::chrono::steady_clock::now();

    cout << endl
         << endl
         << "Apakah ditemukan(Binary Search akhir)?" << binarySearch(arr, 10, 0, index - 1);

    chrono::duration<double, milli> durationBinaryLast = endBinaryLast - startBinaryLast;
    cout << endl
         << "Waktu eksekusi Binary Search ketika yg dicari di akhir: " << durationBinaryLast.count() << " milidetik" << endl;

    cout << endl
         << endl
         << binarySearch(arr, 3, 0, index - 1);

    return 0;
}