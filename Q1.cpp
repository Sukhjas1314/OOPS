#include<iostream>
using namespace std;
class Person{
    protected :
        string name;
    public :
        Person(){
        }
        Person(string n){
            name = n;
        } 
        virtual string getRole() const= 0;
};
class Employee : virtual public Person{
    protected :
        double salary;
    public :
        Employee(){

        }
        Employee(string n,double s){
            name = n;
            salary = s;
        }
        string getRole() const override{
            return "Employee";
        }
};
class Student : virtual public Person{
    protected :
        double grade;
    public :
        Student(){
            
        }
        Student(string n,double g){
            name = n;
            grade = g; 
        }
        string getRole() const override{
            return "Student";
        }
};
class TeachingAssist : public Employee, public Student {
    public :
        TeachingAssist(){

        }
        TeachingAssist(string n,double s,double g){
            name = n;
            salary = s;
            grade = g;
        }
        string getRole() const override{
            return "Teaching Assistant";
        }
};
int main(){
    TeachingAssist t1("Sukhman",10000000.00,9.98);
    Person *p = &t1;
    cout << "Role : " << p->getRole() << endl;
    return 0;
}