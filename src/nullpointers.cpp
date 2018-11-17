#include <iostream>

using namespace std;

int main()
{
    int *null = 0;
    int *otherNull = nullptr;
    int oldStyleNull = NULL;

    cout << *null << endl; // segmentation fault
}