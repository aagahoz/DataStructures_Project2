#ifndef CellClass_hpp
#define CellClass_hpp

class Cell
{
    private:
        int DNA;
    
    public:
        Cell()
        {
            DNA = 0;
        }
        Cell(int newDNA)
        {
            DNA = newDNA;
        }
        int getDNA()
        {
            return DNA;
        }
};

#endif