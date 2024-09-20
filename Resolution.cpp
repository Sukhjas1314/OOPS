// #include<iostream>
// using namespace std;
// int x = 100;
// int main(){
//   int x = 90;
//   cout << x << endl;
//   cout << ::x << endl;
//   return 0;
// }


#include<iostream>
using namespace std;
class Test{
    int i;
    public:
    Test(int x) {
      i = x;
    }  ; //initialized using constructor
    void show(){cout<<"i="<<i<<endl;}
};
int main(){Test t(190);t.show(); }
// class A{
//   public :
//   void fun();
// };
// void A::fun() {
//   cout << "In fun()" << endl;
// }
// int main(){
//   A obj;
//   obj.fun();
//   return 0;
// }