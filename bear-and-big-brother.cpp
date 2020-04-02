// Bear and Big Brother
//https://codeforces.com/problemset/problem/791/A
#include<iostream>
using namespace std;
int main()
{
	int a, b,count=0;
	cin >> a >> b;
	
	do {
		a *= 3;
		b *= 2;
		count++;
	}
	while(a <= b);
	cout<<count;
	return 0;
}
