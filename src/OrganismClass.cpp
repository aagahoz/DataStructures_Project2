#include "OrganismClass.hpp"

Organism::Organism()
{
    this->systems = nullptr;
    index = 0;
}
Organism::Organism(int size)
{
    this->systems = new System[size];
    this->size = size;
    index = 0;
}

void Organism::setIndex(int index)
{
    this->index = index;
}
int Organism::getIndex()
{
    return this->index;
}

void Organism::setSize(int size)
{
    this->size = size;
}
int Organism::getSize()
{
    return this->size;
}

void Organism::addSystemToOrganism(const System &newSystem)
{
    if (index < size)
    {
        this->systems[index] = newSystem;
        index++;
    }
    else
    {
        cout << "Index out of range" << endl;
    }
}

void Organism::printSystems()
{
    for(int i = 0; i < this->size; i++)
    {
        systems[i].print();
    }
}

void Organism::makeBalanceCheck()
{
    for (int i = 0; i < this->size; i++)
    {
        systems[i].makeBalanceLimbs();
    }
}

void Organism::printBalanced()
{
    for (int i = 0; i < this->size; i++)
    {
        systems[i].printBalancedLimbs();
    }
}
