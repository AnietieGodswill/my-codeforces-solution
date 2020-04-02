// In Search of an Easy Problem
//https://codeforces.com/problemset/problem/1030/A
#include <iostream>
using namespace std;
int main()
{
	int n,k,maxno=0;
	cin>>n;
	
	for(int i=0; i<n; i++) {
		cin>>k;
		maxno = max(curMax, k);
	}
	if(maxno > 0) {
		cout<<"Hard";
		}
			
	else {
		cout<<"Easy";	
	}
	
	return 0;
}
