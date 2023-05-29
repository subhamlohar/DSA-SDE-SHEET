#include <bits/stdc++.h>
using namespace std;

// Find Greatest Common Factor(GCD)/HCF
int main(){
    int a,b;
    cin>>a>>b;

    int gcd=1;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    cout<<gcd;
    return 0;
}