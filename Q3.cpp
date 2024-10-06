#include<iostream>
using namespace std;
class Order{
    private :
        int Orderid;
        static int totalOrders;
    public :
        Order(int id){
            ++totalOrders;
            Orderid = id;
            cout << "Order placed with order id : " << Orderid << endl;
        }
        static int getTotalOrders(){
            return totalOrders;
        }
};
int Order::totalOrders = 0;
int main(){
    Order o1(5);
    cout << "Total orders : " << o1.getTotalOrders() << endl;
    Order o2(6);
    cout << "Total orders : " << o2.getTotalOrders() << endl;
    Order o3(7);
    cout << "Total orders : " << o3.getTotalOrders() << endl;
    return 0;
}