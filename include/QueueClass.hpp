#ifndef QueueClass_hpp
#define QueueClass_hpp

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#define SIZE 1000

class Queue
{
    int *arr;     // array to store queue elements
    int capacity; // maximum capacity of the queue
    int front;    // front points to the front element in the queue (if any)
    int rear;     // rear points to the last element in the queue
    int count;    // current size of the queue

public:
    Queue(int size = SIZE); // constructor
    ~Queue();               // destructor

    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();

    void print();
};

#endif