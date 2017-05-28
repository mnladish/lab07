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
#include "getPosInt.hpp"
#include <sstream>    

/**********************************
**          getPosInt            **            
** This function validates that  ** 
** user input is between the min,**
** and max values, and it returns**
** an integer                    **
**********************************/  
int getPosInt()
{
  int posInt;

  bool validInput;

  do
  {
    validInput = true;

    std::string strInt;
    std::cin >> strInt; //input is a string

    //Check that every character in string is actually a digit
    //bool validInput = true;

    for(unsigned int i = 0; i < strInt.length(); ++i)
    {
      if(!isdigit(strInt[i]))  //if not a digit
      {
        validInput = false;
      }
    }

    //convert to integer now
    std::stringstream strStream;
    strStream << strInt;
    strStream >> posInt;

    if((validInput == false) || posInt < 1)
    {
      std::cout << "Error: Invalid input. Try again." << std::endl;
    }

  }while((validInput == false) || posInt < 1);
    
  return posInt;
}


