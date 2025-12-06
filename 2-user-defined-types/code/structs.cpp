#include <iostream>

struct Vector {
  double* elements;
  int size;
};

void vector_init(Vector& v, int s) {
  v.elements = new double[s];
  v.size = s;
}

int main() {
  Vector v;
  vector_init(v, 5);

  for (int i = 0; i != v.size; i++) {
    std::cin >> v.elements[i];
  }

  double sum = 0;
  for (int i = 0; i != v.size; i++) {
    sum += v.elements[i];
  }

  std::cout << sum << std::endl;

  delete[] v.elements;
}
