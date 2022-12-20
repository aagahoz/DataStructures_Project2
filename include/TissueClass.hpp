#ifndef TissueClass_hpp
#define TissueClass_hpp

#include "CellClass.hpp"
#include <iostream>
using namespace std;

class Tissue
{
private:
    Cell *cells;
    int size;
    int index;

public:
    Tissue(int size)
    {
        this->size = size;
        this->index = 0;
        this->cells = new Cell[size];
    }
    void add(const Cell &cell)
    {
        if (index < size)
        {
            cells[index] = cell;
            ++index;
        }
        else
        {
            cout << "Error: Tissue is full!" << std::endl;
        }
    }
    void print() const
    {
        for (int i = 0; i < index; ++i)
        {
            cout << "Cell " << i << ": " << cells[i].getDNA() << endl;
        }
    }
};

#endif
