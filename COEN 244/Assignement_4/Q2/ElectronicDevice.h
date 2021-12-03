 #include <iostream>
 #include <string>

 class ElectronicDevice {
 protected:
   std::string brand, color;
   int serial_number;
   double price;
 public:
   ElectronicDevice();
   ElectronicDevice(std::string tempb, std::string tempc, int temps, int tempp): brand(tempb), color(tempc), serial_number(temps), price(tempp) {}
//Accessing functions
  void setBrand(std::string tempb) {brand = tempb;}
  std::string getBrand() const {return brand;}

  void setColor(std::string tempc) {color = tempc;}
  std::string getColor() const {return color;}

  void setNumber(int temps) {serial_number = temps;}
  int getNumber() const {return serial_number;}

  void setPrice(double temp) {price = temp;}
  double getPrice() const {return price;}

// Print functions
  virtual void Print() {
    std::cout << "Brand: " << brand << std::endl
    << "Color: " << color << std::endl
    << "Serial Number:" << serial_number << std::endl
    << "Price: " << price << std::endl;
  }

};
