#pragma once

template <typename T> class Array {
private:
  T *_array;
  unsigned int _len;

public:
  Array();
  Array(unsigned int n);
  ~Array();
  Array(const Array &other);
  Array &operator=(const Array &other);

  T &operator[](unsigned int index);
  unsigned int size() const;
};

#include "./Array.tpp"
