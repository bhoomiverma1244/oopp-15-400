
#include <iostream>
using namespace std;
void show(int a, int b)
{
    cout << "a = " << a << ", b = " << b << endl;
}
void swapByVal(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside swapByVal: ";
    show(a, b);
}

void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Original values: ";
    show(a, b);


    swapByVal(a, b);
    cout << "After Call by Value: ";
    show(a, b);

    
    swapByAddress(&a, &b);
    cout << "After Call by Address: ";
    show(a, b);


    swapByReference(a, b);
    cout << "After Call by Reference: ";
    show(a, b);

    return 0;
}

