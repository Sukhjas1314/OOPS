#include <iostream>
using namespace std;

class STATIC {
    static int x;
    int y = 0;
    
public:
    void INCREMENT() {
        x++;
        y++;
    }

    static void PRINT(STATIC& obj) {
        cout << "The value of static data member:" << x << endl;
        cout << "The value of Non-static data member:" << obj.y << endl;
    }

    void DISPLAY() {
        cout << "The value of static data member:" << x << endl;
        cout << "The value of Non-static data member:" << y << endl;
    }
};

int STATIC::x = 0;

int main() {
    STATIC s1, s2;

    s1.DISPLAY();
    s2.DISPLAY();

    s1.INCREMENT();
    s1.DISPLAY();
    s2.DISPLAY();

    return 0;
}

