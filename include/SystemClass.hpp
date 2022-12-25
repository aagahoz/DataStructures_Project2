/**
 * @file  SystemClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

#ifndef SystemClass_hpp
#define SystemClass_hpp

#include "LimbClass.hpp"

class System
{
private:
    Limb *limbs;
    int index;

public:
    System();
    void addLimb(Limb *newLimb);
    void print();
    void makeBalanceLimbs()
    {
        for (int i = 0; i < index; i++)
        {
            limbs[i].makeBalanceBST();
        }
    }
    void printBalancedLimbs()
    {
        for (int i = 0; i < index; i++)
        {
            limbs[i].printBalanced();
        }
        cout << endl;
    }
    
};

#endif