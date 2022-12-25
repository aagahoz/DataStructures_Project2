/**
 * @file  CellClass.cpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

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