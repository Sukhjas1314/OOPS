#include<iostream>
using namespace std;
class Complex{
    private :
        float real;
        float img;
    public :
        Complex(){
            real = 0.0;
            img = 0.0;
        }
        Complex(float r,float i){
            real = r;
            img = i;
        }
        Complex operator+(Complex &c){
            Complex C;
            C.real = real + c.real;
            C.img = img + c.img;
            return C;
        }
        void display(){
            cout << "Complex number is : (" << real << "," << img << ")" << endl;
        }
};
int main(){
    Complex c1(3.4,5.5);
    Complex c2(6.6,4.5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
