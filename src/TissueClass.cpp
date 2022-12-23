#include "TissueClass.hpp"

Tissue::Tissue()
{
    this->size = 0;
    this->index = 0;
    this->cells = nullptr;
    this->middleValue = 0;
}
Tissue::Tissue(int size)
{
    this->size = size;
    this->index = 0;
    this->cells = new Cell[size];
    this->middleValue = 0;
}
void Tissue::add(const Cell &cell)
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
void Tissue::print() const
{
    for (int i = 0; i < index; i++)
    {
        //   cout << i << ": " << cells[i].getDNA() << "  ";
        cout << cells[i].getDNA() << "  ";
    }
}
Cell *Tissue::getCells()
{
    return cells;
}
void Tissue::setSize(int size)
{
    this->size = size;
    allocateMemory(size);
}
void Tissue::allocateMemory(int size)
{
    this->cells = new Cell[size];
}
int Tissue::getSize()
{
    return size;
}
void Tissue::printMiddleValue()
{
    middleValue = getMiddleValueArray(this->getCells(), getMiddleValueIndex(this->getCells(), this->getSize()));
    cout << "Middle Value: " << middleValue << endl;
}
int Tissue::getMiddleValue()
{
    return middleValue = getMiddleValueArray(this->getCells(), getMiddleValueIndex(this->getCells(), this->getSize()));
}
