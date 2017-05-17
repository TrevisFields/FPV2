  //Change this part of the code to be a namespace file and then use overloaded functions to all for a true and false checking
#include "Password.h"
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

namespace PasswordCreator
{

static const char pool1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789";

int poolSize1 = sizeof(pool1) - 1;

char getRandomChar()
{
  return pool1[rand() % poolSize1];
}

Password::Password()
  {
while(true)
{
  int passLength = 6;
  int numberOfPasswords;
  srand(time(0));
  string pass;
  cout << "Please enter in the number of passwords you would like to see.\n";
  cin >> numberOfPasswords;
  for(int j = 0; j < numberOfPasswords; j++)
	 {
		for(int i = 0; i < passLength; i++)
		{
		  pass += getRandomChar();
		}
		cout << pass << endl;
		pass = "";
	 }
}
}
		}
