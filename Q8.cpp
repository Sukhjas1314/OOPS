#include<iostream>
using namespace std;
class BankAccount{
    protected :
        float balance;
    public :
        BankAccount(){

        }
        BankAccount(float b){
            balance = b;
        }
        BankAccount(BankAccount &b){
            balance = b.balance;
        }
};
class SavingsAccount : public BankAccount{
    public :
        SavingsAccount(){

        }
        SavingsAccount(float b){
            balance = b;
        }
        SavingsAccount(SavingsAccount &s){
            balance = s.balance;
        }
};
class CurrentAccount : public SavingsAccount{
    public :
        CurrentAccount(){

        }
        CurrentAccount(float b){
            balance = b;
        }
        CurrentAccount(CurrentAccount &c){
            balance = c.balance;
        }
        friend class BankManager;
};
class BankManager{
    public :
        void display(const CurrentAccount &c){
            cout << "Current balance : $" << c.balance << endl;
        }
};
int main(){
    CurrentAccount c(1980000);
    BankManager b;
    b.display(c);

    return 0;
}