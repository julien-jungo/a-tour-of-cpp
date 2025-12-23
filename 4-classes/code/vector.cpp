#include <algorithm>
#include <initializer_list>

class Vector {
public:
  Vector(int s) : elem(new double[s]), n(s) {}

  Vector(std::initializer_list<double> list) : elem(new double[list.size()]), n(static_cast<int>(list.size())) {
    std::copy(list.begin(), list.end(), elem);
  }

  ~Vector() {
    delete[] elem;
  }

  double& operator[](int i) {
    return elem[i];
  }

  int size() const {
    return n;
  }

private:
  double* elem;
  int n;
};

int main() {
  Vector v1 = {1.0, 2.0, 3.0, 4.0, 5.0};
  {
    Vector v2 = {6.0, 7.0, 8.0, 9.0, 10.0};
  } // v2 is destroyed here
} // v1 is destroyed here
