/**
 * @file  OrganismClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

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

    void makeBalanceCheck();
    void printBalanced();

};

#endif