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
#include "menu.hpp"
#include "getPosInt.hpp"

int main()
{
  Queue numbers;
  int menuOption;

  do
  {
    displayMenu();
    menuOption = getChoice();

    if(menuOption != 5)
    {
      switch(menuOption)
      {
        case 1:{ //Enter a value to be added to the queue
                   int num;
                   
                   std::cout << "Enter a positive integer to add to the queue" << std::endl;
                   num = getPosInt();
                   numbers.addBack(num);
                 }
                 break;

        case 2:{ //Display first node (front) value
                   std::cout << numbers.getFront() << std::endl;
                 }
                 break;

        case 3:{ //Remove first node (front) value
                   numbers.removeFront();
                   std::cout << numbers.getFront() << std::endl;
                 }
                 break;

        case 4:{ //Display the queue contents
                   numbers.printQueue();
                 }
                 break;
      }
    }
  }while(menuOption != 5);
 
  return 0;
}  
  
