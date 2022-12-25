/**
 * @file  RadixClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

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