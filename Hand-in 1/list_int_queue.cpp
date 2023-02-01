#include "list_int_queue.h"
#include "assert.h"
#include "stdlib.h"

List_Int_Queue::List_Int_Queue() {
    front = NULL;
    rear = NULL;
    size = 0;
}

void List_Int_Queue::enqueue(int x) {
    //make node
    node* temp = new(node);
    temp->data = x;
    temp->next = NULL;
    size++;

    if(front == NULL && rear == NULL) { //if the queue is empty
  //the node will be both the front and the rear node
		front = temp; 
		rear = temp;
		return;
	} 

	rear->next = temp; //build link to the new node
	rear = temp; //update rear
}

int List_Int_Queue::dequeue() {
    node* temp = front; //pointer to first node.

	if(size == 0) return 0;

	if(front == rear){ //if only one node, reset queue making it NULL.
		front = NULL;
		rear = NULL;
	}
	else {
		front = front->next; //make the front the next node in the queue
	}
  int tempdata = temp->data; //temp value to the temp pointer to hold the data.
	delete(temp); //delete the node from the dynamic memory
  size--;
  return tempdata;
}


bool List_Int_Queue::empty()
{
    return size==0;
}

bool List_Int_Queue::full() {
    return false;
}

List_Int_Queue::~List_Int_Queue() {
    //empty list
    int x;
    while(size != 0) {
        x = dequeue();
    }
}

