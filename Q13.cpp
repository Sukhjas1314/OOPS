#include<iostream>
using namespace std;
class Date{
    private :
        int month;
        int year;
        int day;
        static const char slash;

        void setmonth(int m){
            if(month > 12){
                month = 12;
            }
            else{
                month = m;
            }
        }
        void setyear(int y){
            year = y;
        }
        void setday(int d){
            if(day > 31){
                day = 31;
            }
            else{
                day = d;
            }
        }
    public :
        void setdate(int m,int d,int y){
            setmonth(m);
            setday(d);
            setyear(y);
        }
        void display() const{
            cout << "Date is : " << day << slash << month << slash << year << endl;
        }
};
const char Date::slash = '/';
int main(){
    Date d1,d2,d3;
    d1.setdate(10,13,2004);
    d2.setdate(2,1,2014);

    d1.display();
    d2.display();

    return 0;
}