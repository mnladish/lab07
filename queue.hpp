


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
