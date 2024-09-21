// dynamicArrays.cpp

#include <iostream>
using namespace std;

void addItem(int newItem, int *&scores, int &numItems, int &capacity);

int main()
{
    int capacity = 10;
    int numItems = 5;
    int *scores = new int[capacity];

    for (int i = 0; i < 100; i++)
    {
        addItem(i * 2 + 3, scores, numItems, capacity);
    }

    cout << "Capacity: " << capacity << "\n";
    cout << "Number of items" << numItems << "\n";

    for (int i = 0; i < numItems; i++)
    {
        cout << scores[i] << " ";
    }

    cout << endl;

    // int *ptr1, *ptr2;

    // ptr1 = new int;
    // *ptr1 = 5;
    // ptr2 = ptr1;

    // delete ptr2;
    // cout << "Deleted ptr2" << endl;
    // delete ptr1;
    // cout << "Deleted ptr1" << endl;
}

void addItem(int newItem, int *&scores, int &numItems, int &capacity)
{
    if (numItems == capacity)
    {
        capacity = capacity * 2;
        int *temp = new int[capacity];
        for (int i = 0; i < numItems; i++)
        {
            temp[i] = scores[i];
        }

        delete[] scores;
        scores = temp;
    }

    scores[numItems] = newItem;
    numItems++;
}
