#include<iostream>
using namespace std;
class Employee{
    private :
        int empid;
        string name;
        float salary;
    public :
        Employee(){

        }
        Employee(int id,string n,float s){
            empid = id;
            name = n;
            salary = s;
        }
        static void readdetails(Employee emp[],int n){
            for(int i = 0 ; i < n ; i++){
                int id;
                string name;
                float salary;
                cout << "Enter details of employee " << i + 1 << " : " << endl;
                cout << "Employee Id : ";
                cin >> id;
                cout << "Name : ";
                cin.ignore();
                getline(cin,name);
                cout << "Salary : ";
                cin >> salary;
                emp[i] = Employee(id,name,salary);
            }
        }
        void displaysalary(){
            if(salary >= 1000){
                cout << "Name : " << name << endl;
            }
        }
};
int main(){
    Employee emp[5] = {Employee(0, "", 0)}; 

    Employee::readdetails(emp,5);

    cout << "\nEmployees with salary greater than $1000:\n";
    for (int i = 0; i < 5; ++i) {
        emp[i].displaysalary();
    }
    return 0;
}