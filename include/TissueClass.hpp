/**
 * @file  TissueClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

#ifndef TissueClass_hpp
#define TissueClass_hpp

#include <iostream>
#include "CellClass.hpp"
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
    Tissue();
    Tissue(int size);
    void add(const Cell &cell);
    void print() const;
    Cell* getCells();
    void setSize(int size);
    void allocateMemory(int size);
    int getSize();
    void printMiddleValue();
    int getMiddleValue();
};

#endif
