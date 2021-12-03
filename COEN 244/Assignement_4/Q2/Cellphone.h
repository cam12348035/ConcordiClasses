#include "ElectronicDevice.h"

class Cellphone : private ElectronicDevice {
private:
  int number_of_cameras;
public:
  Cellphone();
  Cellphone(int tempz): number_of_cameras(tempz){}

  void setCamera(int temp) {number_of_cameras = temp;}
  int getCamera() const {return number_of_cameras;}

  void Print() {
    std::cout << "Brand: " << brand << std::endl
    << "Color: " << color << std::endl
    << "Serial Number:" << serial_number << std::endl
    << "Price: " << price << std::endl
    << "Number of cameras: " << number_of_cameras << std::endl;

  }
};
