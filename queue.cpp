


#include <iostream>
#include "queue.hpp"

Queue::Queue()
{
  front = NULL;
  back = NULL;
}

void Queue::addBack(int s)
{
  //add first new value
  if(front == NULL)
  {
    front = new QueueNode;
    front->data = s;
    front->prev = front;
    front->next = front;
    back = front;
  }

  //adding new node after 1st
  else
  {
    back->next = new QueueNode;
    back = back->next;
    back->data = s;
    back->next = front;
  }
}

int Queue::getFront()
{
  QueueNode* temp = front;

  //if queue is empty, error, otherwise return value at front
  //will print 0 after error
  if(temp == NULL)
  {
    std::cout << "Error: Cannot print first node, queue is empty" << std::endl;
    //return 0;
  }
  
  else
  {
    int f = front->data;
    return f;
  }

  return 0;
}

void Queue::removeFront()
{
  QueueNode* temp = front;

  //if queue is empty, error, otherwise remove front
  if(temp == NULL)
  {
    std::cout << "Error: Queue is already empty" << std::endl;
  }

  else
  {
    front->data = -1;
    front = front->next;
  }
}

void Queue::printQueue()
{
  QueueNode* temp = front;

  //if not empty, print
  if(temp != NULL)
  {
    do
    {
      std::cout << temp->data << " ";
      temp = temp->next;
    }while(temp != front);
  }
   std::cout << std::endl;
}

/*
Queue::~Queue()
{
  delete front;
  delete back;
}*/
