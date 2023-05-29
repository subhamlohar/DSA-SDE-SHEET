#include <bits/stdc++.h>
using namespace std;


int main(){
    //creation
    map<string,int> m;

    //insertion
    
    //1
    pair<string,int> p=make_pair("subham",3);
    m.insert(p); 

    //2
    pair<string,int> pair2("lohar",2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen
    // m["adra"]=1;
    

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("lohar")<<endl;


    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;
    // cout<<m["boom"]<<endl;

    //size
    cout<<m.size()<<endl;
    
    //to check presence
    cout<<m.count("subham")<<endl;
    cout<<m.count("lohar")<<endl; 

    //erase
    m.erase("lohar");
    cout<<m.size()<<endl;

    // print all the elements
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    //print all elements using iterator
    // map<string,int> :: iterator it=m.begin();

    // while(it !=m.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }



    return 0;
}