/**
 * @file  SystemClass.cpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */


#include "SystemClass.hpp"

const int NUM_LIMBS = 100;

System::System()
{
    limbs = new Limb[100];
    index = 0;
}

void System::addLimb(Limb *newLimb)
{
    if (index < 100)
    {
        limbs[index] = *newLimb;
        index++;
    }
    else
    {
        cout << "Index out of range" << endl;
    }
}

void System::print()
{
    for (int i = 0; i < index; i++)
    {
        limbs[i].printInorder();
    }
}