#include <list>
#include <initializer_list>
#include <iostream>
#include <stdexcept>

class Container {
public:
  virtual double& operator[](int) = 0;
  virtual int size() const = 0;
  virtual ~Container() {}
};

class VectorContainer : public Container {
public:
  VectorContainer(int s) : v(s) {}

  ~VectorContainer() {} // implicitly calls the member destructor of Vector

  double& operator[](int i) override {
    return v[i];
  }

  int size() const override {
    return v.size();
  }

private:
  std::vector<double> v;
};

class ListContainer : public Container {
public:
  ListContainer() {}

  ListContainer(std::initializer_list<double> l) : li(l) {}

  ~ListContainer() {} // implicitly calls the member destructor of list

  double& operator[](int i) {
    for (auto& x : li) {
      if (i == 0) return x;
      i--;
    }

    throw std::out_of_range("Index out of range");
  }

  int size() const {
    return static_cast<int>(li.size());
  }

private:
  std::list<double> li;
};

void print(Container& c) {
  for (int i = 0; i < c.size(); i++) {
    std::cout << c[i] << " ";
  }

  std::cout << std::endl;
}

int main() {
  // Container x;                       // error: there can be no objects of an abstract class
  // Container y = VectorContainer(10); // error: there can be no objects of an abstract class

  Container* c = new VectorContainer(10);

  for (int i = 0; i < c->size(); i++) {
    (*c)[i] = i * 1.1;
  }

  print(*c);

  VectorContainer vc = VectorContainer(5);

  for (int i = 0; i < vc.size(); i++) {
    vc[i] = i * 2.2;
  }

  print(vc);

  ListContainer lc = {1.0, 2.0, 3.0, 4.0, 5.0};

  for (int i = 0; i < lc.size(); i++) {
    lc[i] = i * 3.3;
  }

  print(lc);

  delete c;
}
