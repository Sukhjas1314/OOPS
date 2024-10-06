#include<iostream>
using namespace std;
class Config{
    private :
        static string default_lang;
        string lang;
        static int id;
    public : 
        Config(){
            ++id;
            lang = default_lang;

            if(id > 0){
                cout << "As no input ,so we added a default language for you" << endl;
            }
        }
        Config(string l){
            ++id;
            lang = l;
        }
        Config(Config &c){
            ++id;
            lang = c.lang;
        }
        static void display(){
            cout << "No. of active players are : " << id << endl;
        }
};
string Config::default_lang = "English";
int Config::id = -1;
int main(){
    static Config for_all;
    Config c1;
    Config c2("Punjabi");
    Config c3(for_all);
    c1.display();
    return 0;
}
