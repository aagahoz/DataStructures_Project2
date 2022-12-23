#include <iostream>
#include <fstream>
#include <sstream>

#include "BinarySearchTreeClass.hpp"
#include "CellClass.hpp"
#include "LimbClass.hpp"
#include "SystemClass.hpp"
#include "TissueClass.hpp"
#include "OrganismClass.hpp"
#include "ControlClass.hpp"
#include "RadixClass.hpp"
#include "QueueClass.hpp"
#include "generalFunctions.hpp"

#include <iostream>

using namespace std;

int main()
{

    const int countOfTissueForLimb = 20;
    const int countOfLimbForSystem = 100;
    const int countOfTissueForSystem = countOfTissueForLimb * countOfLimbForSystem;

    ifstream verilerFile;
    verilerFile.open("DATAs.txt");
    string line;
    int countOfTissue = 0;
    while (getline(verilerFile, line))
    {
        countOfTissue++;
    }
    verilerFile.close();

    cout << "Count of Tissue : " << countOfTissue << endl;
    const int countOfSystem = countOfTissue / countOfTissueForSystem;
    cout << "Count of System : " << countOfSystem << endl;
    const int countOfLimb = countOfTissue / countOfTissueForLimb;
    cout << "Count of Limb : " << countOfLimb << endl;

    Tissue *tissues = new Tissue[countOfTissue];
    Limb *limbs = new Limb[countOfLimb];
    System *systems = new System[countOfSystem];
    Organism *organism = new Organism(countOfSystem);


    int indexTissue = 0;
    int indexLimbs = 0;
    int indexSystems = 0;

    verilerFile.open("DATAs.txt");
    while (getline(verilerFile, line))
    {
        stringstream s(line);
        stringstream finderCountOfCells(line);
        string numberChar;

        int sizeTissue = 0;
        while (finderCountOfCells >> numberChar)
        {
            sizeTissue++;
        }

        tissues[indexTissue].setSize(sizeTissue);

        while (s >> numberChar)
        {
            int number = stoi(numberChar);
            Cell *tempCell = new Cell(number);
            tissues[indexTissue].add(*tempCell);
        }

        RadixSort::sort(tissues[indexTissue].getCells(), tissues[indexTissue].getSize());

        indexTissue++;
    }
    verilerFile.close();

    for (int i = 0; i < countOfLimb; i++)
    {
        for (int j = 0; j < countOfTissueForLimb; j++)
        {
            if (((i * countOfTissueForLimb) + j) > countOfTissue)
            {
                break;
            }
            limbs[i].insertTissue(&tissues[(i * countOfTissueForLimb) + j]);
        }
    }

    cout << "Veriler Organa Basari ile eklendi !!!" << endl;
    cout << "Sira sisteme eklemede !!!" << endl;

    for (int i = 0; i < countOfSystem; i++)
    {
        for (int j = 0; j < countOfLimbForSystem; j++)
        {
            if (((i * countOfLimbForSystem) + j) > countOfLimb)
            {
                break;
            }
            systems[i].addLimb(&limbs[(i * countOfLimbForSystem) + j]);
        }
    }

    cout << "Veriler Sistem Sinifina Basari ile eklendi !!!" << endl;

    for (int i = 0; i < countOfSystem; i++)
    {
        organism->addSystemToOrganism(systems[i]);   
    }
    cout << "Veriler Organismaya Sinifina Basari ile eklendi !!!" << endl;

 //   organism->printSystems();

    return 0;
}