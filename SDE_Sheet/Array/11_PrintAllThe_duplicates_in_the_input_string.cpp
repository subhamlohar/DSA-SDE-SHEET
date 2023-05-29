#include <bits/stdc++.h>
using namespace std;

void printDup(string str){
    map<char,int>count;
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }

    for(auto it:count){
        if(it.second>1){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}

int main(){
    string str="Subham Lohar";
    printDup(str);
    return 0;
}