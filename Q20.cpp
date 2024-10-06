#include<iostream>
using namespace std;
class Student{
    private :
        int rollno;
        string name;
        float marks[5];
    public: 
        Student(int r,string s,float m[]){
            rollno = r;
            name = s;
            for(int i = 0 ; i < 5 ; i++){
                marks[i] = m[i];
            }
        }
        static void average(Student s[],int n){
            float total[5] = {0};

            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < 5 ; j++){
                    total[j] += s[i].marks[j]; 
                }
            }

            for(int i = 0 ; i < 5 ; i++){
                cout << "Subject " << i+1 << " : " << total[i] / n << endl;
            }
        }

};
int main(){
    float marks1[5] = {8.0, 7.5, 9.0, 8.5, 7.0};
    float marks2[5] = {6.0, 7.0, 8.5, 9.0, 7.5};
    float marks3[5] = {7.5, 8.0, 7.0, 6.5, 9.0};
    float marks4[5] = {9.0, 6.5, 8.0, 7.0, 8.5};
    float marks5[5] = {8.5, 9.0, 7.5, 6.0, 8.0};

    Student students[5] = {
        Student(101, "Alice", marks1),
        Student(102, "Bob", marks2),
        Student(103, "Charlie", marks3),
        Student(104, "David", marks4),
        Student(105, "Eve", marks5)
    };
    Student::average(students, 5);

    return 0;
}