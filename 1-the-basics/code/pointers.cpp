#include <iostream>

int* count(const unsigned char* p) {
  if (p == nullptr) {
    return 0;
  }

  int* counts = new int[256]();

  while (*p != 0) {
    counts[*p]++;
    p++;
  }

  return counts;
}

int main() {
  unsigned char arr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

  std::cout << arr << std::endl;

  int* counts = count(arr);

  for (unsigned char i = 0;; i++) {
    if (counts[i] != 0) {
      std::cout << '\'' << i << '\'' << ':' << ' ' << counts[i] << std::endl;
    }

    if (i == 255) {
      break;
    }
  }

  delete[] counts;
}
