#include<iostream>
using namespace std;
class Point{
    private :
        int coord[2];
    public : 
        Point(){
            
        }
        Point(int x,int y){
            coord[0] = x;
            coord[1] = y;
        }
        void read(){
            cout << "Enter the x-coordinate : ";
            cin >> coord[0];
            cout << "Enter the y-coordinate : ";
            cin >> coord[1];
        }
        void display(){
            cout << "The Point is : (" << coord[0] << "," << coord[1] << ")" << endl;
        }
        void fun(Point &p){
            int diffx = coord[0] - p.coord[0];
            int diffy = coord[1] - p.coord[1];
            float distance = sqrt(diffx * diffx + diffy * diffy);
            cout << "The distance is : " << distance << " units" << endl;
        }
};
int main(){
     Point p1, p2;

    cout << "Enter coordinates for point 1:\n";
    p1.read();
    cout << "Enter coordinates for point 2:\n";
    p2.read();

    cout << endl;
    cout << "Point 1: ";
    p1.display();
    cout << "Point 2: ";
    p2.display();

    cout << endl;
    p1.fun(p2);
    return 0;
}