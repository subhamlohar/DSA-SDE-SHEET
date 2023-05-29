#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	int res=0, temp=0;
	
	for(int i=0;i<n;i++){
	    while(s[i]>='0'&&s[i]<='9'){
	        temp=temp*10+(s[i]-'0');
	        i++;
	    }
	    res+=temp;
	        temp=0;
	    }
	
	cout << res <<endl;
	
	return 0;
}