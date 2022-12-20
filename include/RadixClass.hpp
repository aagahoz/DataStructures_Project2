#ifndef RadixClass_hpp
#define RadixClass_hpp

#include "QueueClass.hpp"
#include "CellClass.hpp"

class RadixSort
{
public:
    static void sort(Cell *cells, int n)
    {
        int max = cells[0].getDNA();
        for (int i = 1; i < n; i++)
        { 
            if (cells[i].getDNA() > max)
                max = cells[i].getDNA();
        }
        for (int exp = 1; max / exp > 0; exp *= 10)
        {
            countSort(cells, n, exp);
        }
    }

private:
    static void countSort(Cell *cells, int n, int exp)
    {
        
        Queue *queues = new Queue[10];
        for (int i = 0; i < n; i++)
        {
            int digit = (cells[i].getDNA() / exp) % 10;
            queues[digit].enqueue(cells[i].getDNA());
        }

        int index = 0;
        for (int digit = 0; digit < 10; digit++)
        {
            while (!queues[digit].isEmpty())
                cells[index++] = queues[digit].dequeue();
        }

        delete[] queues;
    }
};

#endif