/**
 * @file  main.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

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

using namespace std;

int main()
{
    string dosyaIsmi = "veriler.txt";

    const int countOfTissueForLimb = 20;
    const int countOfLimbForSystem = 100;
    const int countOfTissueForSystem = countOfTissueForLimb * countOfLimbForSystem;

    ifstream verilerFile;
    verilerFile.open(dosyaIsmi);
    string line;
    int countOfTissue = 0;
    bool isFileOpen = false;
    while (getline(verilerFile, line))
    {
        isFileOpen = true;
        countOfTissue++;
    }
    verilerFile.close();

    if (isFileOpen)
    {
        const int countOfSystem = countOfTissue / countOfTissueForSystem;
        const int countOfLimb = countOfTissue / countOfTissueForLimb;

        Tissue *tissues = new Tissue[countOfTissue];
        Limb *limbs = new Limb[countOfLimb];
        System *systems = new System[countOfSystem];
        Organism *organism = new Organism(countOfSystem);
        int indexTissue = 0;
        int indexLimbs = 0;
        int indexSystems = 0;

        verilerFile.open(dosyaIsmi);

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

        for (int i = 0; i < countOfSystem; i++)
        {
            organism->addSystemToOrganism(systems[i]);
        }
        cout << endl;
        cout << endl;
        organism->makeBalanceCheck();
        organism->printBalanced();

        delete[] tissues;
        delete[] limbs;
        delete[] systems;
        delete organism;

        cout << endl;
        cout << endl;
    }
    else
    {
        cout << "Dosya Okuma Sorunu" << endl;
    }

    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle
    // ! test sınıfı ekle

    return 0;
}