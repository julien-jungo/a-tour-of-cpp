#include <iostream>

struct Entry {
  std::string name;
  std::variant<int, double> value;
};

int main() {
  Entry e = {"foo", 5};

  if (std::holds_alternative<int>(e.value)) {
    std::cout
      << "value is an int ("
      << std::get<int>(e.value)
      << ")"
      << std::endl;
  } else {
    std::cout
      << "value is a double ("
      << std::get<double>(e.value)
      << ")"
      << std::endl;
  }
}
