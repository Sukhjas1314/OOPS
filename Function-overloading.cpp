                    // function overloading
#include<iostream>
using namespace std;
                // Factor is -: No. of arguments
void test(){                                // No argument
    cout << "Hello" << endl << endl;
}
void test(string n){                        // 1 argument
    cout << "Hello " << n << endl << endl;
}
void test(int a,string n){                  // 2 arguments
    for(int i = 0 ; i < a ; i++){
        cout << "Hello " << n << endl;
    }
    cout << endl;
}
void test(double a){                        // 1 argument with different datatype
    cout << "Count = " << a << endl << endl;
}
int main(){
    test();
    test("Sukhman");
    test(5,"Sukhi");
    test(3.5);
    return 0;
}