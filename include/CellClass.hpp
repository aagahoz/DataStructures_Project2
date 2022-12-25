/**
 * @file  CellClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

#ifndef CellClass_hpp
#define CellClass_hpp

class Cell
{
    private:
        int DNA;
    
    public:
        Cell();
        Cell(int newDNA);
        int getDNA();
};

#endif