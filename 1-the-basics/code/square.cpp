#include <iostream>

double square(double x) {
  return x * x;
}

int main() {
  std::cout
    << 5 << ' ' << '*' << ' ' << 5
    << ' ' << '=' << ' '
    << square(5)
    << std::endl;
}
