#include "LoginMenu.h"
#include "UserNameMenu.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Password.h"

LoginMenu::LoginMenu()
{
  // --> DISPLAY USER LOGIN SCREEN TO BEGIN PROGRAM
int choice;
do {
	 // --> DISPLAY MENU SCREEN
  std::cout << std::setw(20) << "LOGIN SCREEN\n";
  std::cout << "*****************************" << std::endl;
  std::cout << "1) New User\n";
  std::cout << "2) Continuing User\n";
  std::cout << "3) See Current Users\n";
  std::cout << "4) Exit Program\n";
  system("pause");
  // --> PROMPT USER TO ENTER IN A CHOICE
  // --> SWITCH CHOICE
  std::cin >> choice;
  switch(choice)
  {
		case 1:
		  // --> call new user password and user name function
		  // --> continue to next menu
		
		/* --> Why will this not work in the way that i would like it to */
		PasswordCreator::Password();
		/* --> CODE THAT MAY NEED TO BE DELETED OR MODIFED <-- */
		
		break;
		case 2:
		  // --> call user name login and password login screen
		  // --> check to see if both are valid entries
		  // --> continue to next menu
		auto newUser = UserNameMenuChoice::UserNameMenu();
		  // --> DELETE CODE FOR BETTER WORKING CODE <-- //
		break;
		case 3:
		  // --> show current user
		break;
		case 4:
		  // --> Exit program
		std::cout <<  std::setw(30) << ". . .Exiting Program.\n";
		break;
		default:
		std::cout << "INVALID OPTION. PLEASE ENTER A VALID OPTION TO CONTINUE" << std::endl;
		
  }
	 system("cls");
} while(choice != 4);
}

LoginMenu::~LoginMenu()
{
  
}
