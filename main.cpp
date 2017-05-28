
#include <iostream>
#include "queue.hpp"
#include "menu.hpp"

int main()
{
  Queue numbers;
  char menuOption;

  do
  {
    displayMenu();
    menuOption = getChoice();

    if(menuOption != 'X')
    {
      switch(menuOption)
      {
        case 'A':{ //Enter a value to be added to the queue
                   int num;
                   
                   std::cout << "Enter a positive integer to add to the queue" << std::endl;
                   num = getPosInt();
                   numbers.addBack(num);
                 }
                 break;

        case 'B':{ //Display first node (front) value
                   std::cout << "The first node (front) value is: " << std::endl;
                   std::cout << numbers.getFront();
                 }
                 break;

        case 'C':{ //Remove first node (front) value
                   numbers.removeFront();
                   std::cout << "The first node (front) value is now: " << std::endl;
                   std::cout << numbers.getFront();
                 }
                 break;

        case 'D':{ //Display the queue contents
                   numbers.printQueue();
                 }
                 break;
      }
    }
  }while(menuOption != 'X');
 
  return 0;
}  
  
/*  
  Queue numbers;

  std::cout << "First I will add 1" << std::endl;
  numbers.addBack(1);
  std::cout << "Front: " << numbers.getFront() << std::endl;
  std::cout << "Back: " << numbers.getBack() << std::endl;
  std::cout << "Now I will add 2" << std::endl;
  numbers.addBack(2);  
 // numbers.printQueue();
  std::cout << "Front: " << numbers.getFront() << std::endl;
  std::cout << "Back: " << numbers.getBack() << std::endl;
  std::cout << "Now I will add 3" << std::endl;
  numbers.addBack(3);
  std::cout << "Front: " << numbers.getFront() << std::endl;
  std::cout << "Back: " << numbers.getBack() << std::endl;
  std::cout << "Now I will add 4" << std::endl;
  numbers.addBack(4);
  std::cout << "Front: " << numbers.getFront() << std::endl;
  std::cout << "Back: " << numbers.getBack() << std::endl;
  
  std::cout << "Print 1 2 3 4: " << std::endl;
  numbers.removeFront();
  numbers.printQueue();

//  numbers.removeFront();

  std::cout << "Front: " << numbers.getFront() << std::endl;
  std::cout << "Back: " << numbers.getBack() << std::endl;
  //numbers.print();

  return 0;
}*/
