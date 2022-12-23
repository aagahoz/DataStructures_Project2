#ifndef LimbClass_hpp
#define LimbClass_hpp

#include "BinarySearchTreeClass.hpp"

class Limb
{
private:
    BinarySearchTree bst;

public:
    Limb();

    void insertTissue(Tissue *newTissue);

    void printInorder();

    void printSharp();
};

#endif