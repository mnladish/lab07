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

#include <iostream>
#include "menu.hpp"
#include <sstream>

/*****************************************
**          displayMenu()               **
** This function shows the menu choices **
** available to the user after clearing **
** the screen.                          **
*****************************************/

void displayMenu()
{
  std::cout << std::endl;
  std::cout << "Welcome to your queue" << std::endl;
  std::cout << std::endl;
  std::cout << "1. Enter a value to be added to the queue" << std::endl;
  std::cout << "2. Display first node (front) value" << std::endl;
  std::cout << "3. Remove first node (front) value" << std::endl;
  std::cout << "4. Display the queue contents" << std::endl;
  std::cout << "5. Exit" << std::endl;
  std::cout << std::endl;
}

/*****************************************
 * **           getChoice                  **
 * ** This function gets the user's choice **
 * *****************************************/

int getChoice()
{
  int choice;
  
  std::cout << "Choose a menu option" << std::endl;

  choice = getOption();

  return choice;
}


/*****************************************
**          getOption  ()               **
** This function verifies that the user **
** inputs a valid menu option and       **
** returns that option.                 **
*****************************************/

int getOption()
{
  int num;
                   
  bool validInput;
                           
  do
  {
    validInput = true;
                                                                        
    std::string strInt;
    std::cin >> strInt;

    //verify input consists of digits only
    for(unsigned int i = 0; i < strInt.length(); ++i)
    {
      if(!isdigit(strInt[i]))
      {
        validInput = false;
      }
    }
                                                       
    std::stringstream strStream;
    strStream << strInt;
    strStream >> num;
                                                            
    //Error output
    if((validInput == false) || ((num != 1) && (num != 2) && (num != 3) && (num != 4) && (num != 5)))
    {
      std::cout << "Error: invalid input.";
      std::cout << " Enter a valid menu option." << std::endl;
    }
  }while((validInput == false) || ((num != 1) && (num != 2) && (num != 3) && (num != 4) && (num != 5)));
                                                                                                
  return num;
}

