#include<iostream>
using namespace std;
class vehicle{
  public : 
    int topSpeed;
    float mileage;
    string fuelType;
};
class Car : public vehicle{
  public : 
    bool sunroof;
};
class Bike : public vehicle{
  public : 
    string name;
    int gears;
};
class Truck : public vehicle{
  public : 
    string company; 
};
int main(){
  cout << endl;
  return 0;
}