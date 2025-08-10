#include "./iter.hpp"
#include <string>

void incrementArr(int &a) { ++a; }

void changeStr(std::string &str) { str = "Malaka"; }

int main() {

  int array[]{0, 1, 2, 3, 4, 5};
  ::iter(array, 6, ::printElement<int>);

  std::string strArray[]{"Malaka", "Hello", "World"};
  ::iter(strArray, 3, printElement<std::string>);

  ::iter(array, 6, incrementArr);
  ::iter(array, 6, ::printElement<int>);

  ::iter(strArray, 3, changeStr);
  ::iter(strArray, 3, printElement<std::string>);

  return 0;
}
