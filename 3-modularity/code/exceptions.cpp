#include <iostream>

double divide(double a, double b) {
  if (b == 0) {
    throw std::runtime_error("division by zero");
  }

  return a / b;
}

double square(double a) noexcept {
  return a * a;
}

std::vector<int>* create_vector(int n) {
  try {
    return new std::vector<int>(n);
  } catch (std::length_error& e) {
    throw;
  }
}

int main() {
  try {
    double result = divide(10, 0);
    std::cout << result << std::endl;
  } catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << square(5) << std::endl;

  try {
    delete create_vector(-5);
  } catch (const std::length_error& e) {
    std::cout << e.what() << std::endl;
  }
}
