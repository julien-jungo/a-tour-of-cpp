#include <map>
#include <complex>
#include <iostream>

struct Point {
  int x;
  int y;
};

void inc(std::map<std::string, int>& m) {
  for (auto& [key, value] : m) {
    value++;
  }
}

void print(const std::map<std::string, int>& m) {
  for (auto& [key, value] : m) {
    std::cout << key << ": " << value << std::endl;
  }
}

int main() {
  Point p = {1, 2};
  auto [x, y] = p;

  std::cout << '(' << x << ',' << y << ')' << std::endl;

  std::map<std::string, int> m = {{"a", 1}, {"b", 2}, {"c", 3}};

  inc(m);
  print(m);
}
