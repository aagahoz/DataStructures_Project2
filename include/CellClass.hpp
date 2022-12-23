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