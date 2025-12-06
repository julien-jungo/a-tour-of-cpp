#include <iostream>

class Vector {
public:
  Vector(int s) : elements(new double[s]), n(s) {}

  ~Vector() {
    delete[] elements;
  }

  double& operator[](int i) {
    return elements[i]; // read-write access
  }

  int size() {
    return n;
  }

private:
  double* elements;
  int n;
};

int main() {
  Vector v(5);

  for (int i = 0; i != v.size(); i++) {
    std::cin >> v[i];
  }

  double sum = 0;
  for (int i = 0; i != v.size(); i++) {
    sum += v[i];
  }

  std::cout << sum << std::endl;
}
