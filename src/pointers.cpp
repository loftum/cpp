#include <iostream>

using namespace std;

int getValue(int value)
{
    return value;
}

int main()
{
    int value = 42;
    int otherValue = 43;
    int *pointer = &value; // pointer points to address of value
    int **doublePointer = &pointer; // doublePointer points to address of pointer
    int (*get)(int) = getValue; // function pointer

    cout << value << endl; // 42
    cout << *pointer << endl; //42
    cout << ** doublePointer << endl; // 42

    pointer = &otherValue; // pointer (and hence doublePointer) now points to address of otherValue (43).
    **doublePointer += 1; // Whatever value (43) doublePointer points to, is incremented (to 44)
    cout << **doublePointer << endl; // 44;

    // function pointer
    cout << get(128) << endl; // 128
}
