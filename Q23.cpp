#include<iostream>
using namespace std;
class Time{
    private : 
        int hours;
        int minutes;
        int seconds;
    public :
        Time(){

        }
        Time(const Time &t){
            hours = t.hours;
            minutes = t.minutes;
            seconds = t.seconds;
        }
        void read(){
            cout << "Enter the time in hours : ";
            cin >> hours;
            cout << "Enter the time in minutes : ";
            cin >> minutes;
            cout << "Enter the time in seconds : ";
            cin >> seconds;
        }
        void display(){
            cout << "Time is : " << hours << ":" << minutes << ":" << seconds << endl;
        }
        friend Time difference(Time &t1,Time &t2);
};
Time difference(Time &t1,Time &t2){
    Time diff;
    int sec1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int sec2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int totaldiff = abs(sec1 - sec2);

    diff.hours = totaldiff / 3600;
    totaldiff %= 3600;
    diff.minutes = totaldiff / 60;
    diff.seconds = totaldiff % 60;

    return diff;
}
int main(){
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.read();

    cout << "\nEnter second time:\n";
    t2.read();

    cout << "\nFirst time: ";
    t1.display();
    cout << "Second time: ";
    t2.display();

    Time diff = difference(t1,t2);
    cout << "\nDifference between the two times: ";
    diff.display();
    return 0;
}