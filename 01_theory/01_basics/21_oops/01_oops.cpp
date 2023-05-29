#include <bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;
    }//default constructor


    student(string s,int a,int g){
        name=s;
        age=a;
        gender=g;
    }//parameterised constructor

    student(student &a){
        cout<<"copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }


    void setName(string s){
        name=s;
    }

    void printInfo(){
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
    }

};

int main(){
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cin>>s;
    //     cout<<"Name= ";
    //     arr[i].setName(s);
    //     cout<<"age= ";
    //     cin>>arr[i].age;
    //     cout<<"Gender= ";
    //     cin>>arr[i].gender;

    // }

    // for(int i =0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Subham",20,1);
    a.printInfo();
    student b;
    student c=a;
    student g=b;
    return 0;
}