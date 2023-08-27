#include <iostream>
using namespace std;

int calculatePointerSize(int level)
{
    if (level == 0)
    {
        void* ptr = nullptr;
        return sizeof(ptr);
    }

    return calculatePointerSize(level - 1);
}

int main()
{
    int level = 5;
    int pointerSize = calculatePointerSize(level);

    cout << "Ukuran pointer pada level " << level << ": " << pointerSize << " byte" << endl;
    return 0;
}
