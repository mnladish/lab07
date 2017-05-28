


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
      void addBack(int n);
      int getFront();
      void removeFront();
      void printQueue();
      //~Queue();
};
#endif
