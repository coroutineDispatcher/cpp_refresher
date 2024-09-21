// arrays.cpp
// static allocated arrays

#include <iostream>
using namespace std;

void setArrToOnes(int numItems, int arr[]);

void printValues(int numItems, int arr[]);

int main()
{
    int score[10] = {1, 2, 3, 4};
    int allInitialized[] = {6, 5, 4, 3, 2, 1};
    int myStuff[10][10];

    printValues(10, score);
    printValues(10, myStuff[0]);
    printValues(10, myStuff[1]);
    printValues(6, allInitialized);

    cout << endl;
}

void setArrToOnes(int numItems, int arr[])
{
    for (int i = 0; i < numItems; i++)
    {
        arr[i] = 1;
    }
}

void printValues(int numItems, int arr[])
{
    for (int i = 0; i < numItems; i++)
    {
        cout << i;
    }
}
