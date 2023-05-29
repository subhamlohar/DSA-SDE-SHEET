#include <bits/stdc++.h>
using namespace std;

//[[Encapsulation]]
class Student{

    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
};

/*[[Inheritance]]---------------*5 Types : 1.Single Inheritance,2.Multi-Level,
                                       3.Multiple,4.Hybrid,5.Heirarchical */
class Human{
    public:
        int height;
        int weight;
        int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};
//Single Inheritance
class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};
//Multi-level Inheritance
class Subham: public Male{
    int Fitness;
};

class Animal{
    public:
    int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

//Multiple Inheritance
class Hybrid:public Human,public Animal{

};

//Heirarchical Inheritance
class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};

class B:public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }

    void func(){
        cout<<"I am B"<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }

    void func(){
        cout<<"I am C"<<endl;
    }
};

//Hybrid Inheritance--> Using more than 1-Type of Inheritance

//For ambiguity
class D:public B,public C{
    
};


/*[[Polymorphism]]---->*Two types--1.Compile time Polymorphism
                                   2.Run time Polymorphism  */ 

//Compile time Polymorphism(Static Polymorphism)-->a)Function Overloading  b)Operator Overlading


//Function Overloading
class ABC{
    public:
    void sayHello(){
        cout<<"Hello Subham."<<endl;
    }
    int sayHello(int age){
        cout<<"Subham your age is "<<age<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

//Operator Overloading
class XYZ{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(XYZ &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output: "<<value2-value1<<endl;
    }
};

//Run time Polymorphism(Dynamic Polymorphism)

//Method Overriding
class Parent{
    public:
    void scold(){
        cout<<"scolding"<<endl;
    }
};

class Mother:public Parent{
    public:
    void scold(){
        cout<<"Speaking"<<endl;
    }
};

//[[Abstrsction]]--->Implimentation Hiding




int main(){
    Student first;

    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep();

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    A obje1;
    obje1.func1();

    B obje2;
    obje2.func1();
    obje2.func2();

    C obje3;
    obje3.func1();
    obje3.func3();

    D obje4;
    //obje4.func(); --> Inheritance Ambiguity

    //To resolve this Ambiguity we use Scope Operator

    obje4.B::func();
    obje4.C::func();


    ABC obj;
    obj.sayHello();
    obj.sayHello("Subham");
    obj.sayHello(25);

    XYZ objec1,objec2;
    objec1.a=4;
    objec2.a=5;

    objec1+objec2;

    Mother ob1;
    ob1.scold();

    

    
    return 0;
}