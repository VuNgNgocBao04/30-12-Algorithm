#include<bits/stdc++.h>
using namespace std;
int main() {
	string x;
	int d[300]={};
	cin>>x;
	for(int i=0;i<x.length();i++) {
		d[x[i]]++;
	}
	for(char c='a';c<='z';c++) {
		while(d[c]--) cout<<c;
	}
}
