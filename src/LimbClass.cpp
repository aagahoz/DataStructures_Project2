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