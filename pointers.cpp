// pointers.cpp

#include <iostream>
using namespace std;

int main()
{
    int v, *ptr;
    double x, *y;

    ptr = &v;
    y = &x;

    v = 5;
    x = 1.2;

    cout << ptr << endl;
    cout << *ptr << endl;
    cout << y << endl;
    cout << *y << endl;

    *ptr = 7;
    cout << v << endl;

    int scoreArray[10];
    int *scorePtr = scoreArray;
    *scorePtr = 10;
    scoreArray[1] = 20;
    scorePtr[2] = 11;
    *(scoreArray + 3) = 40;

    for (int i = 0; i < 4; i++)
    {
        cout << i << "; " << scoreArray[i] << " at " << scoreArray+i << "\n";
    }
    
}