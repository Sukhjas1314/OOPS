#include<iostream>
using namespace std;
class DB;
class DM{
    private :
        float meters;
        float centimeters;
    public :
        DM(){

        }
        DM(float m,float cm){
            meters = m;
            centimeters = cm;
        }
        void display(){
            cout << "Distance in meters and centimeters : " << meters << " m   " << centimeters << " cm" << endl;
        }
        friend DM add(const DM &dm,const DB &db);
        friend DB add(const DB &db,const DM &dm);
};
class DB{
    private :
        float feet;
        float inches;
    public :
        DB(){

        }
        DB(float f,float i){
            feet = f;
            inches = i;
        }
        void display(){
            cout << "Distance in feet and inches : " << feet << " ft   " << inches << " inch" << endl;
        }
        friend DM add(const DM &dm,const DB &db);
        friend DB add(const DB &db,const DM &dm);
};
DM add(const DM &dm,const DB &db){
    float total_cm = (dm.meters * 100) + dm.centimeters + (db.feet * 30.48) + (db.inches * 2.54);
    float total_m = total_cm / 100;
    float centimeters = fmod(total_cm,100);
    return DM(total_m,centimeters);
}
DB add(const DB &db,const DM &dm){
    float total_inches = (dm.meters * 39.37) + (dm.centimeters * 0.3937) + db.inches + (db.feet * 12);
    float total_feet = total_inches / 12;
    float inches = fmod(total_inches,12);
    return DB(total_feet,inches);
}
int main(){
    DM dm(3,50);
    DB db(11,5);

    DM result_dm = add(dm,db); 
    result_dm.display();

    DB result_db = add(db,dm);
    result_db.display();

    return 0;
}