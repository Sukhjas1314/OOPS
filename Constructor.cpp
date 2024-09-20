#include<iostream>
using namespace std;
class Student{
  public:
    string name;
    int rollNo;
    float CGPA;

    Student(){                          //Default Constructor

    }
    Student(string n){                  //Parametrised Constructor
      name = n;
    }
    Student(string n,int r){            //Parametrised Constructor
      name = n;
      rollNo = r;
    }
    Student(string n,int r,float c){    //Parametrised Constructor
      name = n;
      rollNo = r;
      CGPA = c;
    }
    Student(int r,float c,string n){    //Parametrised Constructor
      name = n;
      rollNo = r;
      CGPA = c;
    }
};
int main(){
  Student S1("Sukhman",102317112,9.2);

  Student S2("Daksh Garg",102303322,9.2);

  Student S3("Gaurav");

  Student S4("Harith",102303336);

  Student S5(102317111,9.2,"Eshaan");

  Student S6 = S1;      //Deep Copy         //Copy Constructor
  S6.name = "Jashan";

  Student S7(S2);                           //Copy Constructor

  cout << "Student 1 :-" << endl;
  cout << " " << S1.name << endl;
  cout << " " << S1.rollNo << endl;
  cout << " " << S1.CGPA << endl;

  cout << endl;

  cout << "Student 2 :-" << endl;
  cout << " " << S2.name << endl;
  cout << " " << S2.rollNo << endl;
  cout << " " << S2.CGPA << endl; 

  cout << endl;

  cout << "Student 3 :-" << endl;
  cout << " " << S3.name << endl;

  cout << endl;

  cout << "Student 4 :-" << endl;
  cout << " " << S4.name << endl;
  cout << " " << S4.rollNo << endl;

  cout << endl;

  cout << "Student 5 :-" << endl;
  cout << " " << S5.name << endl;
  cout << " " << S5.rollNo << endl;
  cout << " " << S5.CGPA << endl; 

  cout << endl;

  cout << "Student 6 :-" << endl;
  cout << " " << S6.name << endl;
  cout << " " << S6.rollNo << endl;
  cout << " " << S6.CGPA << endl;

  cout << endl;

  cout << "Student 7 :-" << endl;
  cout << " " << S7.name << endl;
  cout << " " << S7.rollNo << endl;
  cout << " " << S7.CGPA << endl; 

  cout << endl;
  return 0;
}