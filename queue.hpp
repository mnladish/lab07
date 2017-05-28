/******************************************************
** Program Name: Circle List
** Author: Megan Ladish
** Date: 5/21/17
** Description: This program is a circular doubly linked
** list. It is a FIFO (first in first out), so the first
** node added will be removed first. It adds new nodes
** to the back, prints the first node, and prints the 
** entire list.
*******************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

struct QueueNode
{
  int data;
  QueueNode* next;
  QueueNode* prev;
};

class Queue
{
  private:
      QueueNode* front;   //points to the first value in circle
      QueueNode* back;    //points to the last value in circle

  public:
      Queue();
      void addBack(int n); //adds item at the end of the queue
      int getFront(); //returns the value at the front of the queue
      void removeFront(); //removes item at the front of the queue
      void printQueue();
      ~Queue();
};
#endif
