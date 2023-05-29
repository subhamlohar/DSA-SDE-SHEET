#include <bits/stdc++.h>
using namespace std;


int main(){
    //creation
    unordered_map<string,int> m;

    //insertion
    
    
    pair<string,int>p1=make_pair("hteh",8);
    m.insert(p1);

    pair<string,int>p2=make_pair("ehtenb",9);
    m.insert(p2); 
    //1
    pair<string,int>p=make_pair("subham",6);
    m.insert(p);

    

    
    //2
    pair<string,int>pair2("lohar",2);
    m.insert(pair2);

    

    //3
    m["adra"]=7;

    //what will happen
    // m["adra"]=1;
    

    //search
    cout<<m["subham"]<<endl;
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
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }


    //print all elements using iterator
    unordered_map<string,int> :: iterator it=m.begin();

    while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    return 0;
}