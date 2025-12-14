#include "Vector.h"

Vector::Vector(int s) : elements(new double[s]), n(s) {}

Vector::~Vector() {
  delete[] elements;
}

double& Vector::operator[](int i) {
  return elements[i];
}

int Vector::size() {
  return n;
}
