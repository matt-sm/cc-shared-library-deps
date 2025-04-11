#include <string>
#include "hello.h"
#include "lib2/hello2.h"

std::string Hello2::print()
{
  Hello hi;  
  return hi.print() + " from hello2";
}