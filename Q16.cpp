#include<iostream>
using namespace std;
class Movie{
    private :
        string title;
        int year;
        string directorname;
    public :
        void settitle(string t){
            title = t;
        }
        void setyear(int y){
            year = y;
        }
        void setdirector(string d){
            directorname = d;
        }
        void display(){
            cout << "Title of the movie : " << title << endl;
            cout << "Year of release : " << year << endl;
            cout << "Director's name : " << directorname << endl;
        }
};
int main(){
    Movie myFavoriteMovie;


    myFavoriteMovie.settitle("Inception");
    myFavoriteMovie.setyear(2010);
    myFavoriteMovie.setdirector("Christopher Nolan");

    myFavoriteMovie.display();

    return 0;
}