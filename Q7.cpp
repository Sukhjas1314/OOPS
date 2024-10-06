#include<iostream>
using namespace std;
class Person{
    protected :
        string name;
    public :
        Person(){

        };
        Person(string n){
            name = n;
        }
        Person(Person &p){
            name = p.name;
        }
};
class Student : public Person{
    protected :
        int id;
    public :
        Student(){

        }
        Student(string n,int i){
            name = n;
            id = i;
        }
        Student(Student &s){
            name = s.name;
            id = s.id;
        }
};
class Graduate : public Student{
    private :
        float gpa;
    public :
        Graduate(){

        }
        Graduate(string n,int i,float gp){
            name = n;
            id = i;
            gpa = gp;
        }
        Graduate(Graduate &g){
            name = g.name;
            id = g.id;
            gpa = g.gpa;
        }
        friend class friendclass;
};
class friendclass{
    public :
        void display(const Graduate &g){
            cout << "Name : " << g.name << endl;
            cout << "Student ID : " << g.id << endl;
            cout << "CGPA : " << g.gpa << endl;
        }
};
int main(){
    Graduate g1("Sukhman",13,10.0);
    friendclass f;
    f.display(g1);
    return 0;
}