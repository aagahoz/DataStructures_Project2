/**
 * @file  generalFunctions.cpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

#include "generalFunctions.hpp"

int getMiddleValueIndex(Cell* array, int size)
{
    return size / 2;
}

int getMiddleValueArray(Cell* array, int middleIndex)
{
    return array[middleIndex].getDNA();
}
