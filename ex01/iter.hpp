#pragma once

#include <cstddef>
#include <iostream>

template <typename T> void printElement(const T &e) {
  std::cout << e << std::endl;
}

template <typename T, typename F> void iter(T *array, size_t len, F f) {

  for (size_t i = 0; i < len; ++i)
    f(array[i]);
}
