#include <cstdlib>
#include <string>

namespace PasswordCreator
{
class Password
{
private:
  void setPassword(std::string);
public:
  void getPassword();
  void getPassword(std::string);
  
  Password();
  ~Password();
};
}
