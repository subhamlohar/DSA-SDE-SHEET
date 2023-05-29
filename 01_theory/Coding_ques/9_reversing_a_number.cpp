#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int originaln=n;
//     int sum=0;
//     while(n>0){
//         int d=n%10;
//         sum=10*sum+d;
//         n=n/10;
//     }
//     cout<<sum<<endl;   //reversed the number

//     if(sum==originaln)  //Palindrome checked
//         cout<<"Palindrome";
//     else
//         cout<<"not Palindrome";

//     return 0;
// }

int isPalindrome(int n){
    int originaln=n;
    int reversen=0;
    while(n>0){
        reversen=reversen*10+n%10;
        n=n/10;
    }
    if(reversen==originaln)
        return 1;
    else 
        return 0;

}

int main(){
    int n;
    cin>>n;

    if(isPalindrome(n)){
        cout<<"Palindrome no";
    }
    else 
       cout<<"not palindrome no";

    return 0;
}