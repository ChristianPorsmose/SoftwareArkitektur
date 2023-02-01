#include "array_int_queue.h"
#include "assert.h"


Array_Int_Queue::Array_Int_Queue(int size) {
    //construct new queue
    queue = new int[size];
    max = size; 
    rear = 0;
}

void Array_Int_Queue::enqueue(int x) {
    //put new element in backline
    assert(rear < max);
    queue[rear] = x;
    rear++;
}

int Array_Int_Queue::dequeue() {
    assert(rear>0);
    int temp = queue[0];

    //shift all elements 1 to the left
    for (int i = 0; i < rear -1; i++) {
        queue[i] = queue[i+1];
    }

    rear--;

    return temp;
}

bool Array_Int_Queue::full() {
    return (rear==max);
}

bool Array_Int_Queue::empty() {
    return (rear > 0);
}

Array_Int_Queue::Array_Int_Queue() {
    delete queue;
}
