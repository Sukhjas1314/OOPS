#include<iostream>
using namespace std;
class Order{
    private :
        int tableno;
        string servername;
        int patronsno;
        static int tablemincharge;
    public :
        Order(){

        }
        Order(int t,string s,int p,int tp){
            tableno = t;
            servername = s;
            patronsno = p;
            tablemincharge = tp;
        }
        static int gettablemincharge(){
            return tablemincharge;
        }
        void display(){
            cout << "Table number : " << tableno << endl;
            cout << "Server's name : " << servername << endl;
            cout << "Number of patrons on the table : " << patronsno << endl;
            cout << "Table's charge : $" << gettablemincharge() << endl;
        }
};
int Order::tablemincharge = 475;
int main(){
    cout << "Table minimum charge is : $" << Order::gettablemincharge() << endl;
    Order o1(2,"Gaurav",5,500);
    o1.display();
    return 0;
}