#include <iostream>

enum class TrafficLight {
  GREEN,
  YELLOW,
  RED
};

TrafficLight& operator++(TrafficLight& t) {
  switch(t) {
    case TrafficLight::GREEN:
      return t = TrafficLight::YELLOW;
    case TrafficLight::YELLOW:
      return t = TrafficLight::RED;
    case TrafficLight::RED:
      return t = TrafficLight::GREEN;
  }
}

std::ostream& operator<<(std::ostream& os, TrafficLight t) {
  switch(t) {
    case TrafficLight::GREEN:
      return os << "GREEN";
    case TrafficLight::YELLOW:
      return os << "YELLOW";
    case TrafficLight::RED:
      return os << "RED";
  }
}

int main() {
  TrafficLight t = TrafficLight::GREEN;

  do {
    std::cout << t << std::endl;
  } while (++t != TrafficLight::GREEN);
}
