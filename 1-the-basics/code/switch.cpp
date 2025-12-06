#include <iostream>

struct Point {
  int x;
  int y;
};

void action() {
  while (true) {
    std::cout << "Enter action:\n";
    std::string action;
    std::cin >> action;

    Point delta = {0, 0};

    for (char c : action) {
      switch (c) {
        case 'u': // up
        case 'n': // north
          delta.y++;
          break;
        case 'r': // right
        case 'e': // east
          delta.x++;
          break;
        case 'd': // down
        case 's': // south
          delta.y--;
          break;
        case 'l': // left
        case 'w': // west
          delta.x--;
          break;
        case 'q': // quit
          return;
        default:
          std::cout << "Invalid action: " << c << std::endl;
          break;
      }
    }

    std::cout << "Move: " << delta.x << ", " << delta.y << std::endl;
  }
}

int main() {
  action();
}
