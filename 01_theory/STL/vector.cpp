#include <bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int>v;
    v.push_back(5);
    v.emplace_back(6);   //same as push_back but a bit faster

    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int, int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    cout<<vec[0].first<<" "<<vec[1].second<<endl;

    vector<int> vect(5,100);  //will give output [100,100,100,100,100]

    cout<<vect[0]<<" "<<vect[1]<<endl;

    vector <int>v1(5);   //[0,0,0,0,0]
    cout<<v1[0]<<" "<<v1[1];

    vector <int>v2(5,20);   //[20,20,20,20,20]

    vector <int>v3(v2);     //same as v2


}

void explainIteratorInVector(){
    vector <int>v{5,6,7,8};
    vector <int>::iterator it = v.begin;

}

int main(){

    explainVector();
    
    return 0;
}