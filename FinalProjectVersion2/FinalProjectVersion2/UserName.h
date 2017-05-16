#pragma once
#include "LoginMenu.h"
#include "Password.h"
#include "FinalProjectDisclaimerMessage.h"
#include <string>

namespace UserNameCreator
{
  class UserName
  {
	 private:
	 std::string _name;
	 std::string setUserName();
	 public:
	 std::string getUserName();
	 
	 UserName();
	 ~UserName();
  };
}
