#include<iostream>
using namespace std;
class Transaction;
class Account{
    private :
        double balance;
    public :
        Account(){

        }
        Account(double b){
            balance = b;
        }
        double getBalance(){
            return balance;
        }
        friend void transfermoney(Account &s,Account &r,Transaction &t);
};
class Transaction{
    private :
        double amount;
    public :
        Transaction(){

        }
        Transaction(double a){
            amount = a;
        }
        friend void transfermoney(Account &s,Account &r,Transaction &t);
};
void transfermoney(Account &s,Account &r,Transaction &t){
    if(s.balance < t.amount){
        cout << "Insufficient balance";
    }
    else{
        cout << "Transaction Successful!" << endl;
        s.balance = s.balance - t.amount;
        r.balance = r.balance + t.amount;
    }
    cout << "The sender's updated account balance is : $" << s.balance << endl;
    cout << "The receiver's updated account balance is : $" << r.balance << endl;
}
int main(){
    Account s(100000.00);
    Account r(3000.00);
    Transaction t(20000.00);

    transfermoney(s,r,t);
    cout << endl;
    return 0;
}