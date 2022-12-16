#include "QueueClass.hpp"

Queue::Queue() : head_(NULL), tail_(NULL), size_(0) {}

Queue::~Queue()
{
    while (!empty())
    {
        pop();
    }
}

void Queue::push(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    if (empty())
    {
        head_ = new_node;
        tail_ = new_node;
    }
    else
    {
        tail_->next = new_node;
        tail_ = new_node;
    }
    ++size_;
}

void Queue::pop()
{
    if (!empty())
    {
        Node *temp = head_;
        head_ = head_->next;
        delete temp;
        --size_;
    }
}

int Queue::front()
{
    if (!empty())
    {
        return head_->data;
    }
    return int();
}

int Queue::back()
{
    if (!empty())
    {
        return tail_->data;
    }
    return int();
}

bool Queue::empty() const
{
    return (head_ == NULL);
}

size_t Queue::size() const
{
    return size_;
}