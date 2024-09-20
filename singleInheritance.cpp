#include<iostream>
using namespace std;
class Scooty{
  public :
    int topSpeed;
    float mileage;
};
class Bike : public Scooty{
  public :
    int gears;
};
int main(){
  Bike b1;
  b1.topSpeed = 180;
  b1.mileage = 12.5;
  b1.gears = 4;

  cout << "Top Speed of bike : " << b1.topSpeed << "km/hr" << endl;
  cout << "Avg. Mileage of the bike : " << b1.mileage << "km/l" << endl;
  cout << "No. of gears in the bike : " << b1.gears << endl;

  cout << endl;
  return 0;
}