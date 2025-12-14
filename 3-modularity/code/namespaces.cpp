#include <iostream>

namespace MyLib {

  void print(std::string s) {
    using std::cout;
    using std::endl;

    cout << s << endl;
  }

  void print(const std::vector<int>& v) {
    using std::cout;
    using std::endl;

    for (int i = 0; i != v.size(); i++) {
      cout << v[i] << " ";
    }

    cout << endl;
  }
}

using namespace std;

int main() {
  MyLib::print("Hello World");

  vector<int> a = {1, 2, 3};
  vector<int> b = {4, 5, 6};

  swap(a, b);

  cout << "a: ";
  MyLib::print(a);

  cout << "b: ";
  MyLib::print(b);
}
