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