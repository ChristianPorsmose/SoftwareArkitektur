#ifndef INT_QUEUE_H
#define INT_QUEUE_H


class Int_Queue {

    public:
        virtual void enqueue(int) const = 0;
        virtual int dequeue() const = 0;
        virtual bool empty() const = 0;
        virtual bool full() const = 0;
        virtual ~Int_Queue() {}
};


#endif