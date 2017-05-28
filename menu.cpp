/******************************************************
** Program Name: Shopping List
** Author: Megan Ladish
** Date: 2/5/17
** Description: This program is a shopping list to keep
** track of the name, unit type, quantity to buy, unit
** price, and total price of the shopping List.
*******************************************************/

#include <iostream>
#include "menu.hpp"

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
  std::cout << "a. Enter a value to be added to the queue" << std::endl;
  std::cout << "b. Display first node (front) value" << std::endl;
  std::cout << "c. Remove first node (front) value" << std::endl;
  std::cout << "d. Display the queue contents" << std::endl;
  std::cout << "x. Exit" << std::endl;
  std::cout << std::endl;
}

/*****************************************
 * **           getChoice                  **
 * ** This function gets the user's choice **
 * *****************************************/

char getChoice()
{
  char choice;
  
  std::cout << "Choose a menu option" << std::endl;

  std::cin.getline(choice,1);
  
  choice = toupper(choice);

  while(choice != 'A' && choice != 'B' && choice != 'C'
        && choice != 'D' && choice != 'X')
  {
    std::cout << "Error: Invalid input. Please try again." << std::endl;
    std::cin >> choice;
    choice = toupper(choice);
  }

  return choice;
}

