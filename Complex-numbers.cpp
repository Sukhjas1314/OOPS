#include<iostream>
using namespace std;
class ComplexNumbers{
    private :
        int real;
        int img;
    public : 
        ComplexNumbers(){
            real = 0;
            img = 0;
        }
        ComplexNumbers(int real,int img){
            this->real = real;
            this->img = img;
        }
        void add(ComplexNumbers &c){
            real = c.real + real;
            img = c.img + img;
        }
        void multiply(ComplexNumbers &c){
            int r = (real * c.real) - (img * c.img);
            int i = (img * c.real) + (real * c.img);

            real = r;
            img = i;
        }
        void print(){
            cout << real << " + i" << img << endl;
        }
};
int main(){
    int r1,r2,i1,i2;
    cout << "Enter value of real part 1 : ";
    cin >> r1;
    cout << "Enter value of imginary part 1 : ";
    cin >> i1;
    cout << "Enter value of real part 2 : ";
    cin >> r2;
    cout << "Enter value of imginary part 2 : ";
    cin >> i2;

    ComplexNumbers c1(r1,i1);
    ComplexNumbers c2(r2,i2);

    cout << "The Complex Number 1 : ";
    c1.print();
    cout << "The Complex Number 1 : ";
    c2.print();

    cout << "After adding Complex number : ";
    c1.add(c2);
    c1.print();

    cout << "After multiplying Complex number : ";
    c1.multiply(c2);
    c1.print();

    cout << endl;
    return 0;
}