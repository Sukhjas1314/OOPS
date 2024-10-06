#include<iostream>
using namespace std;
class TF;
class TC{
    private :
        float celsius;
    public :
        TC(){
            celsius = 0;
        }
        void readcelsius(){
            cout << "Enter the temperature in celsius : ";
            cin >> celsius;
        }
        void display(){
            cout << "Temperature in celsius is : " << celsius << "°C" << endl;
        }
        friend TC add(TC &c,TF &f);
};
class TF{
    private :
        float fahrenheit;
    public: 
        TF(){
            fahrenheit = 0;
        }
        void readfahrenheit(){
            cout << "Enter the temperature in fahrenheit : ";
            cin >> fahrenheit;
        }
        void display(){
            cout << "Temperature in fahrenheit : " << fahrenheit << "°F" << endl;
        }
        friend TC add(TC &c,TF &f);
};
TC add(TC &c,TF &f){
    TC temperature;
    temperature.celsius = c.celsius + (f.fahrenheit - 32) / 1.8;
    return temperature;
}
int main(){
    TC tempC;
    TF tempF;

    tempC.readcelsius();
    tempF.readfahrenheit();

    // Displaying the individual temperatures
    tempC.display();
    tempF.display();

    // Adding the temperatures and displaying the result
    TC result = add(tempC, tempF);
    cout << "After adding the temperatures: ";
    result.display();
    return 0;
}