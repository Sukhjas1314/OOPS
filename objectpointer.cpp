#include<iostream>
using namespace std;
class Cricketer{
  public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
      this->name = name;
      this->runs = runs;
      this->avg = avg;
    }
    void change(Cricketer *c){
      (*c).avg = 77.5;
    }
};
int main(){
  Cricketer c1("Virat Kohli",25000,78.7);
  Cricketer c2("Mahendra Singh Dhoni",10000,54.5);

  Cricketer *p1 = &c1;
  cout << (*p1).name << endl;

  cout << p1->runs << endl;
  cout << p1->avg << endl;
  // int x = 4;
  // cout << &x << endl;

  // int* p = &x;
  // cout << p << endl;
  // cout << *p << endl;
  // cout << &p << endl;

  // *p = 100;
  // cout << x << endl;

  cout <<endl;
  return 0; 
}