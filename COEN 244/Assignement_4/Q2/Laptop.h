#include "ElectronicDevice.h"

class Laptop : private ElectronicDevice {
private:
  int number_of_cores;
  bool touchscreen;
public:
  Laptop();
  Laptop(int tempz, bool tempx): number_of_cores(tempz), touchscreen(tempx) {}

  void setCores(int temp) {number_of_cores = temp;}
  int getCores() const {return number_of_cores;}

  void setTouchscreen(bool temp) {touchscreen = temp;}
  bool getTouchscreen() const {return touchscreen;}

  void Print() {
      std::cout << "Brand: " << brand << std::endl
      << "Color: " << color << std::endl
      << "Serial Number:" << serial_number << std::endl
      << "Price: " << price << std::endl
      << "Number of cores: " << number_of_cores << std::endl;
      if (touchscreen)
        std::cout << "Touchscreen: Yes\n";
      else
        std::cout << "Touchscreen: No\n";
  }
};
