#include <bits/stdc++.h>
using namespace std;

class Hero{

    //properties
    private:
    int health;
    
    public:
    char level;

    //constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }

    //Parameterised Constructor
    Hero(int health){
        this->health=health;
        // cout<<"1st"<<endl;
    }

    Hero(int health,char level){
        this->health=health;
        this->level=level;
        // cout<<"2nd"<<endl;
    }

    //Copy Constructor
    Hero(Hero& temp){
        cout<<"Copy constructor is called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    } 

    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }


};


int main(){
    
    //object created statistically
    Hero Ramesh(10);
    Ramesh.print();

    Hero Suresh(10,'B');
    Suresh.print();

    // Copy Constructor
    Hero Mitesh(Suresh);
    Mitesh.print();

    //object created dynamically
    Hero *h=new Hero();







    /*

    //Creation of object
    Hero ramesh;
    cout<<"Ramesh Health is "<<ramesh.getHealth()<<endl;  //will give garbage value

    //ramesh.health=80;   // showing error because its private
    ramesh.level='B';
    cout<<"Level is "<<ramesh.level<<endl;


    //use setter
    ramesh.setHealth(70);
    ramesh.setLevel('A');

    cout<<"Health is "<<ramesh.getHealth()<<endl;
    cout<<"Level is "<<ramesh.getLevel()<<endl;

    */

    return 0;
}