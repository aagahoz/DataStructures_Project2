#include <iostream>

#include "BinarySearchTreeClass.hpp"
#include "CellClass.hpp"
#include "LimbClass.hpp"
#include "SystemClass.hpp"
#include "TissueClass.hpp"
#include "OrganismClass.hpp"
#include "ControlClass.hpp"
#include "RadixClass.hpp"
#include "QueueClass.hpp"
#include "generalFunctions.hpp"

#include <iostream>

using namespace std;

int main()
{

    Queue *newQueue = new Queue(10);
    newQueue->enqueue(1);
    newQueue->enqueue(2);
    newQueue->enqueue(3);
    newQueue->enqueue(4);
    newQueue->enqueue(5);
    newQueue->enqueue(6);

    cout << "Size: " << newQueue->size() << endl;

    newQueue->print();

    cout << "Peek :" << newQueue->peek() << endl;

    newQueue->~Queue();

    newQueue->print();

    int i = 0;
    int* arr = new int[10];
    arr[i] = 170; i++;
    arr[i] = 45; i++;
    arr[i] = 75; i++;
    arr[i] = 90; i++;
    arr[i] = 802; i++;
    arr[i] = 24; i++;
    arr[i] = 2; i++;
    arr[i] = 66; i++;

    int n = 8;
    RadixSort::sort(arr, n);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    i = 0;
    arr = new int[10];
    arr[i] = 170; i++;
    arr[i] = 5; i++;
    arr[i] = 275; i++;
    arr[i] = 30; i++;
    arr[i] = 302; i++;
    arr[i] = 54; i++;
    arr[i] = 22; i++;
    arr[i] = 53; i++;
    arr[i] = 32; i++;

    n = 9;
    RadixSort::sort(arr, n);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << endl;
    cout << "Deger : " << getMiddleValueArray(arr, getMiddleValueIndex(arr, n)) << endl;


    delete[] arr;


    return 0;
}

// satırı oku ve heap arraye at
// kuyruğa at
// arrayi temizle
