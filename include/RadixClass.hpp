#ifndef RadixClass_hpp
#define RadixClass_hpp

#include "QueueClass.hpp"
#include "CellClass.hpp"

class RadixSort
{
public:
    static void sort(Cell *cells, int n)
    {
        // Find the maximum element in the array
        int max = cells[0].getDNA();
        for (int i = 1; i < n; i++)
            if (cells[i].getDNA() > max)
                max = cells[i].getDNA();

        // Do counting sort for each digit. Note that instead
        // of passing digit number, exp is passed. exp is 10^i
        // where i is the current digit number
        for (int exp = 1; max / exp > 0; exp *= 10)
            countSort(cells, n, exp);
    }

private:
    static void countSort(Cell *cells, int n, int exp)
    {
        // Create a queue for each digit and initialize all
        // queues as empty
        Queue *queues = new Queue[10];

        // Traverse the array and place each element in the
        // queue corresponding to its digit
        for (int i = 0; i < n; i++)
        {
            int digit = (cells[i].getDNA() / exp) % 10;
            queues[digit].enqueue(cells[i].getDNA());
        }

        // Traverse all queues and dequeue all elements
        // in each queue, putting them back into the array
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