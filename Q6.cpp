 #include<iostream>
 using namespace std;
 class Employee{
    private :
        const int empid;
        static int totalemp;
    public :
        Employee(int id) : empid(id){
            totalemp++;
        }
        friend void display(Employee &emp);
 };
 void display(Employee &emp){
    cout << "Employee ID : " << emp.empid << endl;
    cout << "Total employees : " << Employee::totalemp << endl;
 }
 int Employee::totalemp = 0;
 int main(){
    Employee e1(10);
    Employee e2(12);
    Employee e3(13);

    display(e1);
    display(e2);
    display(e3);

    return 0;
 }