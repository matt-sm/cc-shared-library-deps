#include "hello.h"

int main() {
  Hello hi;  
  if (hi.print() != "Hello Library!") {
    return 1;
  }
}