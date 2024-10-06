#include<iostream>
using namespace std;
class base{
    protected :
        int bid;
    public :
        base(){

        }
        base(float i){
            bid = i;
        }
        base(base &b){
            bid = b.bid;
        }

};
class derived1 : public base{
    protected :
        float did1;
    public :
        derived1(){

        }
        derived1(float bi,float i){
            bid = bi;
            did1 = i;
        }
        derived1(derived1 &d1){
            bid = d1.did1;
            did1 = d1.did1;
        }

};
class derived2 : public derived1{
    protected :
        float did2;
    public :
        derived2(){

        }
        derived2(int bi,int d1,float d2){
            bid = bi;
            did1 = d1;
            did2 = d2;
        }
        derived2(derived2 &d2){
            bid = d2.bid;
            did1 = d2.did1;
            did2 = d2.did2;
        }
        void display() {
            cout << "Base id : " << bid << endl;
            cout << "Derived1 id : " << did1 << endl;
            cout << "Derived2 id : " << did2 << endl;
        }
};
int main(){

    derived2 d2(11,12,13);
    derived2 d22(d2);

    d2.display();
    cout << endl;
    d22.display();

    return 0;
}