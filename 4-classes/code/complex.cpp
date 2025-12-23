#include <iostream>

class Complex {
  double re, im;

public:
  Complex(double r = 0, double i = 0) : re(r), im(i) {}

  double real() const { return re; }
  void real(double r) { re = r; }

  double imag() const { return im; }
  void imag(double i) { im = i; }

  Complex& operator+=(Complex z) {
    re += z.re;
    im += z.im;
    return *this;
  }

  Complex& operator-=(Complex z) {
    re -= z.re;
    im -= z.im;
    return *this;
  }
};

Complex operator+(Complex a, Complex b) {
  return a += b;
}

Complex operator-(Complex a, Complex b) {
  return a -= b;
}

Complex operator-(Complex z) {
  return Complex(-z.real(), -z.imag());
}

bool operator==(Complex a, Complex b) {
  return a.real() == b.real() && a.imag() == b.imag();
}

bool operator!=(Complex a, Complex b) {
  return !(a == b);
}

int main() {
  Complex z1(1, 2);
  Complex z2(3, 4);

  Complex z3 = z1 + z2;
  Complex z4 = z1 - z2;
  Complex z5 = -z1;

  std::cout << "z3: (" << z3.real() << ", " << z3.imag() << ")\n";
  std::cout << "z4: (" << z4.real() << ", " << z4.imag() << ")\n";
  std::cout << "z5: (" << z5.real() << ", " << z5.imag() << ")\n";
}
