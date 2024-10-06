#include<iostream>
using namespace std;
class Team;
class Player{
    private :
        string name;
    public :
        int score;
        Player(){

        }
        void set_player(string n,int s){
            name = n;
            score = s;
        }
        void display(){
            cout << "Name : " << name << endl;
            cout << "Score : " << score << endl;
        }
};
class Team{
    private : 
        Player players[3];
        int sum;
    public :
        Team(){
            sum = 0;
        }
        void set_player(){
            int score;
            string name;
            for(int i = 0 ; i < 3 ; i++){
                cin >> name;
                cin >> score;
                players[i].set_player(name,score);
            }
        }
        void display(){
            for(int i = 0 ; i < 3 ; i++){
                players[i].display();
            }
        }
        void add_score(){
            for(int i = 0 ; i < 3 ; i++){
                sum += players[i].score;
            }
            cout << "Total score of the team is : " << sum << endl;
        }
        friend int comp_score(Team t1,Team t2);
};
int comp_score(Team t1,Team t2){
    if(t1.sum > t2.sum){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    Team Ind,Pak;

    cout << "Enter the team Ind details : " << endl;
    Ind.set_player();
    Ind.display();
    Ind.add_score();

    cout << "Enter the team Pak details : " << endl;
    Pak.set_player();
    Pak.display();
    Pak.add_score();

    if(comp_score(Ind,Pak) == 1){
        cout << "Team Ind is the winner." << endl;
    }
    else{
        cout << "Team Pak is the winner." << endl;
    }
    return 0;
}