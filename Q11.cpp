#include<iostream>
using namespace std;
class GroceryItem{
    private :
        int stockno;
        float price;
        int quantity;
        float total_value;

        void setstockno(){
            while(stockno < 1000 || stockno > 9999){
                cout << "Enter the stock number(1000 - 9999) : ";
                cin >> stockno;
                if(stockno < 1000 || stockno > 9999){
                    cout << "Invalid stock number." << endl;
                }
            }
        }
        void setprice(){
            while(price < 0){
                cout << "Enter the price : ";
                cin >> price;
                if(price < 0){
                    cout << "Invalid price" << endl;
                }
            }
        }
        void setquantity(){
            while(quantity < 0){
                cout << "Enter the quantity of the stock : ";
                cin >> quantity;
                if(quantity < 0){
                    cout << "Invalid quantity" << endl;
                }
            }
        }
        void calc_totalvalue(){
            total_value = price * quantity;
        }
    public : 
        void dataentry(){
            setstockno();
            setprice();
            setquantity();
            calc_totalvalue();
        }
        void display(){
            cout << "Stock number : " << stockno << endl;
            cout << "Price of the item : " << price << endl;
            cout << "Quantities : " << quantity << endl;
            cout << "Total price of the item : " << total_value << endl;
            cout << "----------------------------------------------------";
        }
};
int main(){
    GroceryItem g[10];
    cout << "Enter the details of the 10 grocery items : " << endl;
    for(int i = 0 ; i < 10 ; i++){
        g[i].dataentry();
    }
    for(int i = 0 ; i < 10 ; i++){
        g[i].display();
    }
    return 0;
}