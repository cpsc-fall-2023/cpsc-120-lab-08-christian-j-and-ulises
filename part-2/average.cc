// Ulises Flores
// floresperezu7418@csu.fullerton.edu
// @UlisesFloresPerez
// Partners: @chrisjimenez36

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cerr << "Error: At least one command line argument is required."
              << std::endl;
    return 1;
  }

  double sum = 0.0;
  for (size_t i = 1; i < arguments.size(); ++i) {
    try {
      sum += std::stod(arguments[i]);
    } catch (const std::invalid_argument& e) {
      std::cerr << "Error: Invalid argument at index " << i << ": " << e.what()
                << std::endl;
      return 1;
    } catch (const std::out_of_range& e) {
      std::cerr << "Error: Argument out of range at index " << i << ": "
                << e.what() << std::endl;
      return 1;
    }
  }

  double average = sum / static_cast<double>(arguments.size() - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}
