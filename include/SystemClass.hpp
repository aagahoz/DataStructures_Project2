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