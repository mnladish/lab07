/******************************************************
** Program Name: Circle List
** Author: Megan Ladish
** Date: 5/21/17
** Description: This program is a circular doubly linked
** list. It is a FIFO (first in first out), so the first
** node added will be removed first. It adds new nodes
** to the back, prints the first node, and prints the 
** entire list. It plays with exetutable file circleList
*******************************************************/

#include <iostream>
#include "queue.hpp"

Queue::Queue()
{
  front = NULL;
  back = NULL;
}

/*******************************************
**                 addBack()              **
** Checks to see if queue is empty first. **
** Adds new node to the back of queue.    **
*******************************************/

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

/***************************************
**            getFront()              **
** Prints the value in the first node **                
***************************************/

int Queue::getFront()
{
  QueueNode* temp = front;

  //if queue is empty, error, otherwise return value at front
  //will print 0 after error
  if(temp == NULL)
  {
    std::cout << "Error: Cannot print first node, queue is empty";
  }
  
  else
  {
    std::cout << "The first node (front) value is: ";

    int f = front->data;
    return f;
  }

  return 0;
}

/********************************************
**                removeFront()            **
** Checks to see if queue is empty first.  **
** Otherwise, deletes the first node,      **
** frees memory, assigns front pointer to  **
** new position                            **
********************************************/

void Queue::removeFront()
{
  QueueNode* temp = front;

  //if queue is empty, error will print from main
  //otherwise remove front
  if(front == back)
  {
    front = NULL;
    back = NULL;

    delete temp;
  }

  else
  {
    front = temp->next;
    front->prev = back;
    back->next = front;

    delete temp;

    std::cout << "You deleted the first node (front)." << std::endl;
  }
}

/***************************************
**             printQueue()           **
** Prints the queue in reverse order. **
** Returns error is queue is empty    **                
***************************************/

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

  else
  {
    std::cout << "Error: Cannot print queue, queue is empty.";
  }
  
  std::cout << std::endl;
}

Queue::~Queue()
{
  if(front != NULL)
  {
    QueueNode* temp = front;

    do
    {
      QueueNode* next = temp->next;
      delete temp;
      temp = next;
    }while(temp != front);
  }
}

