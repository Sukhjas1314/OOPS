#include<iostream>
using namespace std;
class Car{
  public :
    string name;
    float price;
    int seats;
    string type;
};
void print(Car c){
  cout << c.name << endl;
  cout << c.price << endl;
  cout << c.seats << endl;
  cout << c.type << endl;
  return;
}
void change(Car &c){
  c.name = "Swift";
  c.price = 700000.00;
  c.seats = 5;
  c.type = "Hatchback";
}
int main(){
  Car c1;
  c1.name = "Honda City";
  c1.price = 1300000.00;
  c1.seats = 5;
  c1.type = "Sedan";

  Car c2;
  c2.name = "Endeavour";
  c2.price = 4000000.00;
  c2.seats = 8;
  c2.type = "SUV";

  cout << "Details of Car 1 -:" << endl;
  print(c1);

  cout << endl;

  cout << "Details of Car 2 -:" << endl;
  print(c2);

  cout << endl;
  
  cout << "Details of Car 3 -:" << endl; 
  change(c2);
  print(c2);

  cout << endl;
  return 0;
}