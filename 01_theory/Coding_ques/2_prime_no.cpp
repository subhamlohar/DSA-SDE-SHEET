#include<bits/stdc++.h>
using namespace std;

// Find prime no

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            return 0;
        }
    }
        cout<<"Prime"<<endl;
    return 0;
}