#include<iostream>
using namespace std;
class Student{
  public :
    string name;
    int rollNo;
    float CGPA;
    int age;
};
int main(){
  Student S1;
  cout << "Enter the name : ";
  cin >> S1.name;
  cout << "Enter the roll No. : ";
  cin >> S1.rollNo;
  cout << "Enter the CGPA : ";
  cin >> S1.CGPA;
  cout << "Enter the age : ";
  cin >> S1.age;

  Student S2;
  S2.name = "Daksh Garg";
  S2.rollNo = 102303322;
  S2.CGPA = 9.22;
  S2.age = 19;

  cout << "Student 1 :-" << endl;
  cout << " " << S1.name << endl;
  cout << " " << S1.rollNo << endl;
  cout << " " << S1.CGPA << endl;
  cout << " " << S1.age << endl;
  cout << endl;

  cout << "Student 2 :-" << endl;
  cout << " " << S2.name << endl;
  cout << " " << S2.rollNo << endl;
  cout << " " << S2.CGPA << endl;
  cout << " " << S2.age << endl;

  cout << endl;
  return 0;
}