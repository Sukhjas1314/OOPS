#include<iostream>
using namespace std;
class Example{
    private :
        static int X;
    public :
        static void display(){
            cout << "Value of X : " << X << endl;
        }
};
int Example::X = 1; 
int main(){
    Example e1,e2;
    e1.display();
    e2.display();
    return 0;
}