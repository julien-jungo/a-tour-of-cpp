#include <iostream>
#include <cmath>

namespace math {

  double log(double x, double base = 10) {
    return std::log(x) / std::log(base);
  }
}

int main() {
  std::cout << math::log(100)    << std::endl;
  std::cout << math::log(256, 2) << std::endl;
}
