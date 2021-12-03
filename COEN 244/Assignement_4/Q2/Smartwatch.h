#include "ElectronicDevice.h"

class Smartwatch: private ElectronicDevice {
private:
  int battery_life;
public:
  Smartwatch();
  Smartwatch(int tempz): battery_life(tempz) {}

  void setBattery(int temp) {battery_life = temp;}
  int getBattery() const {return battery_life;}

  void Print() {
    std::cout << "Brand: " << brand << std::endl
    << "Color: " << color << std::endl
    << "Serial Number:" << serial_number << std::endl
    << "Price: " << price << std::endl
    << "Battery Life: " << battery_life << std::endl;
  }
};
