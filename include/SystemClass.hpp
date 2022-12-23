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
};

#endif