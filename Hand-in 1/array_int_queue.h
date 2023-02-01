#ifndef ARRAY_INT_QUEUE_H
#define ARRAY_INT_QUEUE_H

#include "int_queue.h"

class Array_Int_Queue : public Int_Queue {
    private:
        int max;
        int rear;
        int *queue;

    public:
        void enqueue(int) override;
        int dequeue() override;
        bool empty() override;
        bool full() override;
        Array_Int_Queue(int);
        ~Array_Int_Queue();
};

#endif