#ifndef RadixClass_hpp
#define RadixClass_hpp

#include "QueueClass.hpp"

class RadixSort
{
public:
    static void sort(int *arr, int n)
    {
        // Find the maximum element in the array
        int max = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > max)
                max = arr[i];

        // Do counting sort for each digit. Note that instead
        // of passing digit number, exp is passed. exp is 10^i
        // where i is the current digit number
        for (int exp = 1; max / exp > 0; exp *= 10)
            countSort(arr, n, exp);
    }

private:
    static void countSort(int *arr, int n, int exp)
    {
        // Create a queue for each digit and initialize all
        // queues as empty
        Queue *queues = new Queue[10];

        // Traverse the array and place each element in the
        // queue corresponding to its digit
        for (int i = 0; i < n; i++)
        {
            int digit = (arr[i] / exp) % 10;
            queues[digit].enqueue(arr[i]);
        }

        // Traverse all queues and dequeue all elements
        // in each queue, putting them back into the array
        int index = 0;
        for (int digit = 0; digit < 10; digit++)
        {
            while (!queues[digit].isEmpty())
                arr[index++] = queues[digit].dequeue();
        }

        delete[] queues;
    }
};

#endif