//http://en.cppreference.com/w/cpp/language/parameter_pack
#include <iostream>
#include "1180_variadic.h"
using namespace std;

int main(){
  tprintf("% world% %\n", "Hello", '!', 123);    
  return 0;
}
