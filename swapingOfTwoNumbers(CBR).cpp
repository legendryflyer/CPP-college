#include<iostream>
using namespace std;

void cyclicSwap(int *a, int *b);

int main()
{
    int a, b;

    cout << "Enter value of a and b respectively: ";
    cin >> a >> b;

    cout << "Value before swapping: " << endl;
    cout << "a and b respectively are: " << a << ", " << b << ", " <<  endl;

    cyclicSwap(&a, &b);

    cout << "Value after swapping numbers in cycle: " << endl;
    cout << "a and b  respectively are: " << a << ", " << b << ", " <<  endl;

    return 0;
}

void cyclicSwap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}