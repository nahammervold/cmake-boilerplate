#include <iostream>
#include "fizzbuzz.h"
#include "HelloWorldConfig.h"

int main(){
	std::cout << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_PATCH << std::endl;
	std::cout << "Hello World" << std::endl;
	for (int i = 1; i <= 100; i++) {
		std::cout << fizzbuzz(i) << std::endl;
	}
	return 0;
}
