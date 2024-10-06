#include<iostream>
using namespace std;
class CoffeeOrder{
    private :
        static const float pricepercup;
        int cream;
        int milk;
        int sugar;
        int artificial_sweetner;
    public :
        CoffeeOrder(){
            cream = 0;
            milk = 0;
            sugar = 0;
            artificial_sweetner = 0;
        }
        void takeorder(){
            cout << "Would you like cream in your order : (If yes : 1 , no : 0)";
            cin >> cream;
            cout << "Would you like milk in your order : (If yes : 1 , no : 0)";
            cin >> milk;
            cout << "Would you like sugar in your order : (If yes : 1 , no : 0)";
            cin >> sugar;
            cout << "Would you like artificial_sweetner in your order : (If yes : 1 , no : 0)";
            cin >> artificial_sweetner;

            if(cream == 1 && milk == 1){
                milk = 0;
            }
            if(sugar == 1 && artificial_sweetner == 1){
                artificial_sweetner = 0;
            }
        }
        void display(){
            string orderdetails[4];
            int index = 0;

            if(cream){
                orderdetails[index++] = "Cream";
            }
            if(milk){
                orderdetails[index++] = "Milk";
            }
            if(sugar){
                orderdetails[index++] = "Sugar";
            }
            if(artificial_sweetner){
                orderdetails[index++] = "Artificial_sweetner";
            }

            cout << "Coffee Order : " << endl;
            for(int i = 0 ; i < index ; i++){
                if(index == 0){
                    cout << "Black coffee";
                }
                else{
                    cout << orderdetails[i];
                    if(i != index - 1){
                        cout << " , ";
                    }
                }
            }
            cout << endl;
        }
        float getprice() const{
            return pricepercup;
        }
};
const float CoffeeOrder::pricepercup = 1.25; 
int main(){
    const int maxOrders = 10;  
    CoffeeOrder orders[maxOrders]; 
    int orderCount = 0;
    char anotherOrder;

    do {
        orders[orderCount].takeorder();
        orders[orderCount].display();
        orderCount++;

        if (orderCount < maxOrders) {
            cout << "Would you like to place another order? (y/n): ";
            cin >> anotherOrder;
        } else {
            cout << "Maximum order limit reached." << endl;
            anotherOrder = 'n';
        }
    } while (anotherOrder == 'y' && orderCount < maxOrders);

    cout << "\nSummary of all coffee orders:\n";
    double totalPrice = 0;
    for (int i = 0; i < orderCount; i++) {
        cout << "Order " << (i + 1) << ": ";
        orders[i].display();
        totalPrice += orders[i].getprice();
    }

    cout << "\nTotal number of orders: " << orderCount << endl;
    cout << "Total price: $" << totalPrice << endl;


    return 0;
}