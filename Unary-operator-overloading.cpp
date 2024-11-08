#include<iostream>
using namespace std;
class demo{
    private : 
        int x;
    public :    
        demo(){
            x = 0;
        }  
        demo(int x){
            this->x = x;
        }
        demo operator+(){
            demo D;
            D.x = ++x;
            return D;
        }
        void display(){
            cout << "x : " << x << endl;
        }
};
int main(){
    demo d1(5);
    +d1;
    demo d2 = +d1;
    +d2;
    +d2;
    d1.display();
    d2.display();
    return 0;
}