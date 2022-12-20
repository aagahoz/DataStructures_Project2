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

    BinarySearchTree *bst = new BinarySearchTree();

    int array1[5] = {1,2,3,4,5};
    int array2[5] = {11,12,13,14,15};
    int array3[5] = {21,22,23,24,25};
    int array4[5] = {31,32,33,34,35};

    Cell cell1(21);
    Cell cell2(33);
    Cell cell3(46);
    Cell cell4(51);
    Cell cell5(21);

    Tissue *tissue1 = new Tissue(5);

    tissue1->add(cell1);
    tissue1->add(cell2);
    tissue1->add(cell3);
    tissue1->add(cell4);
    tissue1->add(cell5);

    tissue1->print();





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
    cout << endl;

    delete[] arr;
    
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

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
