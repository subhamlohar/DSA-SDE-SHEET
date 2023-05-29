#include <bits/stdc++.h>
using namespace std;


int main(){
//print no's from 1 to 100 except the no's divisible by 3

    // for(int i=0;i<100;i++){       
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

//print if it is prime no

    // int n;
    // cin>>n;
    // int i;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"Not prime";
    //         break;
    //     }
    
    // }
    // if(i==n){
    //     cout<<"prime";
    // }


//print all the prime no's from a to b

    int a,b;
    cin>>a>>b;
    
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}