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
    void print(){
      cout << name << " " << runs << " " << avg << endl;
    }
};
int main(){
  Cricketer c1("Virat Kohli",25000,78.7);
  Cricketer c2("Mahendra Singh Dhoni",10000,54.5);

  c1.print();
  c2.print();

  cout <<endl;
  return 0; 
}