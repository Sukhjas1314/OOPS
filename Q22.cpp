#include<iostream>
using namespace std;
class DOB{
    private : 
        int year;
        int month;
        int day;
    public : 
        DOB(int y,int m,int d){
            year = y;
            month = m;
            day = d;
        }
        DOB(DOB &dob){
            year = dob.year;
            month = dob.month;
            day = dob.day;
        }
        void read(){
            cout << "Enter the year of birth : ";
            cin >> year;
            cout << "Enter the birth month : ";
            cin >> month;
            cout << "Enter the birth day : ";
            cin >> day;
        }
        void display(){
            cout << "Your birthday is on : " << day << "-" << month << "-" << year << endl;
        }
        int computeage(){
            int cyear = 2024;
            int cmonth = 10;
            int cday = 5;

            int age = cyear - year;

            if(cmonth < month || (cmonth == month && cday < day)){
                age--;
            }
            return age;
        }
};
int main(){
    DOB dob(0, 0, 0);
    dob.read();

    dob.display();

    cout << "Age: " << dob.computeage() << " years" << endl;

    DOB copyDOB = dob;
    cout << "Copy of Date of Birth: ";
    copyDOB.display();
    return 0;
}