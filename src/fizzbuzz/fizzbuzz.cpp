#include <iostream>
#include "fizzbuzz.h"

int fizzbuzz(int i){
  
  if (i % 15 == 0){
    std::cout << "fizzbuzz" << std::endl;
    i = 15;
  }
  else if (i % 3 == 0) {
    std::cout << "fizz" << std::endl;
    i = 3;
  }
  else if (i % 5 == 0) {
    std::cout << "buzz" << std::endl;
    i = 5;
  }
  else {
    std::cout << i << std::endl;
  }

  return i;
}
