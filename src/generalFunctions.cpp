#include "generalFunctions.hpp"

int getMiddleValueIndex(Cell* array, int size)
{
    return size / 2;
}

int getMiddleValueArray(Cell* array, int middleIndex)
{
    return array[middleIndex].getDNA();
}
