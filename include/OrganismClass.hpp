#ifndef OrganismClass_hpp
#define OrganismClass_hpp

#include "SystemClass.hpp"

class Organism
{
private:
    System *systems;
    int index;
    int size;

public:
    Organism();
    Organism(int size);

    void setIndex(int index);
    int getIndex();

    void setSize(int size);
    int getSize();

    void addSystemToOrganism(const System &newSystem);

    void setSystems(System* size);
    System* getSystems();

    void printSystems();
};

#endif