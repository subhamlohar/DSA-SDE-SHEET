#include <bits/stdc++.h>
using namespace std;

//pairs
void explainPairs(){

    pair<int,int> p={1,3};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> q={1,{3,4}};

    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;

    pair<int, int>arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[1].second<<" "<<arr[2].first;

}

int main(){
    
    explainPairs();
    return 0;
}