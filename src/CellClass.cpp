#include "CellClass.hpp"

Cell::Cell()
{
    DNA = 0;
}
Cell::Cell(int newDNA)
{
    DNA = newDNA;
}
int Cell::getDNA()
{
    return DNA;
}