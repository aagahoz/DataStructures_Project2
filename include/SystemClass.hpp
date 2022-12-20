#ifndef SystemClass_hpp
#define SystemClass_hpp

#include "LimbClass.hpp"

const int NUM_LIMBS = 100;

class System
{
private:
    Limb *limbs;
    int index;

public:
    System()
    {
        limbs = new Limb[100];
        index = 0;
    }

    void addLimb(Limb *newLimb)
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

    void print()
    {
        //!!
        for (int i = 0; i < index; i++)
        {
            limbs[i].printInorder();
        }
    }
};

#endif