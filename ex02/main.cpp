#include "./Array.hpp"
#include <iostream>
#include <string>

int main() {
  try {
    // Empty array
    Array<int> empty;
    std::cout << "Empty size: " << empty.size() << "\n";

    // Array of ints
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); ++i) {
      intArr[i] = i * 10;
    }

    std::cout << "Int array: ";
    for (unsigned int i = 0; i < intArr.size(); ++i) {
      std::cout << intArr[i] << " ";
    }
    std::cout << "\n";

    // Copy constructor
    Array<int> copyArr(intArr);
    copyArr[0] = 999; // Should not affect intArr
    std::cout << "Original first element: " << intArr[0] << "\n";
    std::cout << "Copy first element: " << copyArr[0] << "\n";

    // Assignment operator
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";
    Array<std::string> assigned;
    assigned = strArr;
    assigned[1] = "C++";
    std::cout << "Original strArr[1]: " << strArr[1] << "\n";
    std::cout << "Assigned[1]: " << assigned[1] << "\n";

    // Out of bounds access
    std::cout << intArr[10] << "\n"; // Should throw

  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << "\n";
  }

  return 0;
}
