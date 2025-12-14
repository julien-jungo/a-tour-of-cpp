export module Vector;

export class Vector {
public:
  Vector(int s);
  ~Vector();
  double& operator[](int i);
  int size();
private:
  double* elements;
  int n;
};

Vector::Vector(int s) : elements(new double[s]), n(s) {}

Vector::~Vector() {
  delete[] elements;
}

double& Vector::operator[](int i) {
  return elements[i];
}

int Vector::size() {
  return n;
}
