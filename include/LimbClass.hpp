/**
 * @file  LimbClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

#ifndef LimbClass_hpp
#define LimbClass_hpp

#include "BinarySearchTreeClass.hpp"
#include "TissueClass.hpp"

class Limb
{
private:
    BinarySearchTree bst;

public:
    Limb();

    void insertTissue(Tissue *newTissue);

    void printInorder();

    void printSharp();

    void makeBalanceBST()
    {
        // cout << "Basarili" << endl;
        bst.isBalanced();
    }
    void printBalanced()
    {
        if (bst.getRoot()->balance)
        {
            cout << " ";
        }
        else
        {
            cout << "#";
        }
    }
};

#endif