// Christian Jimenez
// Chrisjimenez29@csu.fullerton.edu
// @chrisjimenez36
// partners: @UlisesFlorezPerez

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if(argc != 4) {
    std::cerr << "Error: Invalid number of arguments. Usage: program_name PROTEIN BREAD CONDIMENT\n";
    return 1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A" << protein << "sandwhich on" << bread << "with" << condiment << "." << std::end1;

  return 0;
}
