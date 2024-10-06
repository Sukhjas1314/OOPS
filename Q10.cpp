#include<iostream>
using namespace std;
class Shape{
    protected :
        const float area;
    public :
        Shape() : area(0){};
        Shape(float a) : area(a){}
        virtual void calc_area() = 0;
        void display() const{
            cout << "Area of the shape is : " << area << endl;
        }
};
class Circle : public Shape{
    private :
        float radius;
        static int count;
    public :
        Circle(){
            count++;
            radius = 0;
        }
        Circle(float r) : Shape(3.1416 * r * r){
            count++;
            radius = r;
        }
        static int getCount(){
            return count;
        }
        void calc_area(){
            cout << "Area of the circle is : " << area << endl;
        }
};
int Circle::count = 0;
int main(){
    Circle c1(3);
    Circle c2(5);
    Circle(13);
    
    c1.calc_area();
    c2.calc_area();

    cout << "Number of circles are : " << Circle::getCount() << endl;
    return 0;
}