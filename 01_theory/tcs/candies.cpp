#include <bits/stdc++.h>
using namespace std;


int countWays(int N)
{
	
	if (N < 4)
		return 0;

	int ans = ((N - 1) * (N- 2))/ 2;
	int s = 0;

	for (int i = 2; i <= N - 3;i++) {
		for (int j = 1; j < i;
			j++) {

			
			if (N == 2 * i + j)
				s++;
		}
	}

	if (N % 3 == 0)
		s = 3 * s + 1;

	else
		s = 3 * s;

	
	return ans - s;
}

int main()
{
	int N ;
    cin>>N;
	cout << countWays(N);
	return 0;
}