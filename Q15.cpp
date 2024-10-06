#include<iostream>
using namespace std;
class Investment{
    protected :
        float initial;
        float current;
        float profit;
        float percentprofit;
    public :   
        Investment(){

        }
        Investment(float i,float c){
            initial = i;
            current = c;
            calculateprofit();
        }
        void calculateprofit(){
            profit = current - initial;
            percentprofit = profit / initial;
        }
        void display(){
            cout << "Investment Details : " << endl;
            cout << "Initial value : $" << initial << endl;
            cout << "Current value : $" << current << endl;
            cout << "Profit : $" << profit << endl;
            cout << "Percent Profit : $" << percentprofit << endl;
        }
};
class house{
    protected : 
        string streetaddress;
        float squarefeet;
    public :
        house(){
            
        }
        house(string saddress,float sfeet){
            streetaddress = saddress;
            squarefeet = sfeet;
        }
        void display(){
            cout << "Street address : " << streetaddress << endl;
            cout << "Square feet : " << squarefeet << endl;
        }
};
class HouseThatIsAnInvestment : public Investment , public house{
    public :
        HouseThatIsAnInvestment(){

        }
        HouseThatIsAnInvestment(float i,float c,string address,float sf){
            initial = i;
            current = c;
            streetaddress = address;
            squarefeet = sf;
        }
        void display(){
            cout << "House that is an investment : " << endl;
            Investment::display();
            house::display();
        }
};
int main(){
    HouseThatIsAnInvestment h1(300000, 350000, "123 Maple St", 2000);

    h1.display();
    return 0;
}