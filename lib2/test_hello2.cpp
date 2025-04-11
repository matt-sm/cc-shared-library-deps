#include "hello2.h"

int main() {
  Hello2 hi;  
  if (hi.print() != "Hello Library! from hello2") {
    return 1;
  }
}