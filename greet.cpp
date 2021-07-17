#include <iostream>

#include <greet_config.h>

int main(int argc, char *argv[]) {
  // These version variables come from CMake
  std::cout << argv[0] << " Version " << Greet_VERSION_MAJOR
            << "." << Greet_VERSION_MINOR << std::endl;
  std::cout << "Hey" << std::endl;
  return 0;
}

