#ifndef LimbClass_hpp
#define LimbClass_hpp

#include "BinarySearchTreeClass.hpp"

class Limb
{
private:
    BinarySearchTree bst; 
public:
    Limb() {} 

    void insertTissue(Tissue *newTissue) 
    {
        bst.insert(newTissue);
    }

    void printInorder() 
    {
        bst.print(POST);
    }

};

#endif