/**
 * @file  LimbClass.cpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */


#include "LimbClass.hpp"

Limb::Limb() 
{
}

void Limb::insertTissue(Tissue *newTissue)
{
    bst.insert(newTissue);
}

void Limb::printInorder()
{
    bst.print(PRE);
}

void Limb::printSharp()
{
    cout << "Print Sharp" << endl;
}