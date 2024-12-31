#include<bits/stdc++.h>
using namespace std;
int main() {
	char x[10000],*p=x;
	scanf("%[^\n]s",x);
	D:
		if(*p==' ') { p++; goto D;}
		else if(*p==0) return 0;
		else cout<<char(toupper(*p++)); goto T;
	T:
		if(*p==' ') { p++; goto D;}
		else if(*p==0) return 0;
		else cout<<char(tolower(*p++)); goto T;
}
