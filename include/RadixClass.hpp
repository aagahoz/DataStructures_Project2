#ifndef RadixClass_hpp
#define RadixClass_hpp

#include "QueueClass.hpp"
#include "CellClass.hpp"

class RadixSort
{
public:
    static void sort(Cell *cells, int n);

private:
    static void countSort(Cell *cells, int n, int exp);
};

#endif