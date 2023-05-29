#include <bits/stdc++.h>
using namespace std;


int main(){
    //creation
    unordered_map<string,int> m;

    //insertion

    //1
    pair<string,int>pair1=make_pair("Subham",2);
    m.insert(pair1);

    //2
    pair<string,int>pair2("Lohar",3);
    m.insert(pair2);

    //3
    m["Kashipur"]=4;

    //updation
    m["Kashipur"]=5;

    //searching
    cout<<m["Subham"]<<endl;
    cout<<m.at("Lohar")<<endl;

    cout<<m["unknownKey"]<<endl; //an entry is created with 0 value
    cout<<m.at("unknownKey")<<endl;

    //size
    cout<<m.size()<<endl;

    //to chaeck presence
    cout<<m.count("Subham")<<endl;   //if present output:1
    cout<<m.count("Purulia")<<endl;  //if present output:0

    //erase or deletion
    m.erase("Lohar");
    cout<<m.size()<<endl;

    //print all the element
    //1
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //2: iterator
    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}