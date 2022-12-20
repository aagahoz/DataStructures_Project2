#ifndef TissueClass_hpp
#define TissueClass_hpp

#include "CellClass.hpp"
#include <iostream>
#include "generalFunctions.hpp"
using namespace std;

class Tissue
{
private:
    Cell *cells;
    int size;
    int index;
    int middleValue;

public:
    Tissue()
    {
        this->size = 0;
        this->index = 0;
        this->cells = nullptr;
        this->middleValue = 0;
    }
    Tissue(int size)
    {
        this->size = size;
        this->index = 0;
        this->cells = new Cell[size];
        this->middleValue = 0;
    }
    void add(const Cell &cell)
    {
        if (index < size)
        {
            cells[index] = cell;
            index++;
        }
        else
        {
            cout << "Error: Tissue is full!" << endl;
        }
    }
    void print() const
    {
        for (int i = 0; i < index; i++)
        {
            cout << "Cell " << i << ": " << cells[i].getDNA() << endl;
        }
    }
    Cell* getCells()
    {
        return cells;
    }
    void setSize(int size)
    {
        this->size = size;
        allocateMemory(size);
    }
    void allocateMemory(int size)
    {
        this->cells = new Cell[size];
    }
    int getSize()
    {
        return size;
    }
    void printMiddleValue()
    {
        middleValue = getMiddleValueArray(this->getCells(), getMiddleValueIndex(this->getCells(), this->getSize()));
        cout << "Middle Value: " << middleValue << endl;
    }
    int getMiddleValue()
    {
        return middleValue = getMiddleValueArray(this->getCells(), getMiddleValueIndex(this->getCells(), this->getSize()));
    }

    

};

#endif
