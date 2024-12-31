#include<bits/stdc++.h>
using namespace std;
void sinh(int n,int a[],bool &ok) {
	int i=n;
	while(i>=0 && a[i]==1) {
		a[i]=0;
		i--;
	}
	if(i<0) ok=false;
	else a[i]=1;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	int i=n;
	bool ok=true;
	while(ok) {
		for(int i=0;i<n;i++) cout<<a[i];
		cout<<"\n";
		sinh(n,a,ok);
	}
}
