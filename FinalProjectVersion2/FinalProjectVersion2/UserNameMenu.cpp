#include "UserNameMenu.h"
#include <iostream>

namespace UserNameMenuChoice
{
  UserNameMenu::UserNameMenu()
  {
	 char choice;
	 std::cin >> choice;
	 switch (choice)
	 {
		case 'a':
		case 'A':
		  // --> ENTER IN NEW USER NAME INFORMATION
		  std::cout << "Please enter in a new user name.\n";
		  break;
		case 'b':
		case 'B':
		  // --> ENTER IN EXISTING USER CHOICE
		  std::cout << "Welcome back.\n";
		  std::cout << "Please enter in your user name.\n";
		  break;
	 }
  }
  UserNameMenu::~UserNameMenu()
  {
	 
  }
}
