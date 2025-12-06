#include <iostream>

enum Type {
  INT,
  DOUBLE,
};

union Value {
  int i;
  double d;
};

struct Entry {
  std::string name;
  Type type;
  Value value;
};

int main() {
  Entry e = {"foo", INT, {5}};

  if (e.type == INT) {
    std::cout
      << "value is an int ("
      << e.value.i
      << ")"
      << std::endl;
  } else {
    std::cout
      << "value is a double ("
      << e.value.d
      << ")"
      << std::endl;
  }
}
