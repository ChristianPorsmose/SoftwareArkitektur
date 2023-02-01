#ifndef LIST_INT_STACK_H
#define LIST_INT_STACK_H

#include "int_queue.h"

class List_Int_Queue : public Int_Queue {
    private:
        struct node
        {
            int data;
            node* next; 
        };
        
        node* front;
        node* rear;
        int size; 

        

    public:
        void enqueue(int) override;
        int dequeue() override;
        bool empty() override;
        bool full() override;
        List_Int_Queue();
        ~List_Int_Queue();
};

#endif
