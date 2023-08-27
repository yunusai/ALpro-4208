#include <stdlib.h>
#include <iostream>

using namespace std;

int ptrRecursion(int *n)
{
    if (n == nullptr)
    {
        return 0;
    }

    // Menggunakan pemanggilan rekursif untuk mengakses alamat berikutnya
    return 1 + ptrRecursion(n + 1);
}

int main()
{
    int x = 90;
    int *p = &x;

    cout << ptrRecursion(p) << endl;

    return 0;
}