#include "./Array.hpp"
#include <stdexcept>

template <typename T> Array<T>::Array() : _array(nullptr), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(nullptr), _len(n) {
  if (n > 0)
    _array = new T[_len];
}

template <typename T> Array<T>::~Array() {
  if (_array != nullptr) {
    delete[] _array;
  }
}

template <typename T>
Array<T>::Array(const Array &other) : _array(nullptr), _len(other._len) {
  if (_len > 0) {
    _array = new T[_len];
    for (unsigned int i = 0; i < _len; ++i) {
      _array[i] = other._array[i];
    }
  }
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &other) {
  if (this != &other) {
    delete[] _array;
    _len = other._len;
    _array = (_len > 0) ? new T[_len] : nullptr;
    for (unsigned int i = 0; i < _len; ++i)
      _array[i] = other._array[i];
  }
  return *this;
}

// non const
template <typename T> T &Array<T>::operator[](unsigned int index) {
  if (index >= _len) {
    throw std::out_of_range("Index is out of boundz!");
  }
  return _array[index];
}

template<typename T> const T &Array<T>::operator[](unsigned int index) {
  if (index >= _len) {
    throw std::out_of_range("Index is out of boundz!");
  }
  return _array[index];
}

template <typename T> unsigned int Array<T>::size() const { return _len; }
