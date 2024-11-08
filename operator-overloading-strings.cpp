#include<iostream>
using namespace std;
class concatenate{
    private :
        char name[40];
    public :
        void getData(){
            cout << "Enter your name : " << endl;
            cin >> name;
        }
        concatenate operator+(concatenate &c){
            concatenate C;
            strcpy(C.name,name);
            strcat(C.name," ");
            strcat(C.name,c.name);
            return C;
        }
        void display(){
            cout << "Name : " <<  name << endl;
        }
};
int main(){
    concatenate c1,c2,c3;
    c1.getData();
    c2.getData();
    c3 = c1 + c2;
    c3.display();
    return 0;
}