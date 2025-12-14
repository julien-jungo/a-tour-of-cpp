#include <iostream>
#include <cmath>

import Vector;

int main() {
  Vector v(5);

  for (int i = 0; i != v.size(); i++) {
    std::cin >> v[i];
  }

  double sum = 0;
  for (int i = 0; i != v.size(); i++) {
    sum += std::sqrt(v[i]);
  }

  std::cout << sum << std::endl;
}
