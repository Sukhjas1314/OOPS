#include<iostream>
using namespace std;
class Student{
  private :
    float marks;
  public :
    int rollNo;
    string name;

    Student(){

    }
    Student(int r,string n,float m){
      rollNo = r;
      name = n;
      marks = m;
    }
    float getMarks(){
      return marks;
    }
    void setMarks(float m){
      marks = m;
    }
};
int main(){
  Student s1(102317112,"Sukhman",99.95);

  cout << s1.name << " " << s1.rollNo << endl;
  cout << s1.getMarks() << endl;
  s1.setMarks(99.98);
  cout << s1.getMarks() << endl;
  cout << endl;
  return 0;
}