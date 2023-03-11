#include<iostream>
using namespace std;

unsigned long long GetAns(unsigned long long n,unsigned long long k) {
	for(unsigned long long x=1;k>=x&&n>0;k-=x,x=x*2+1,n--);
	return n;
}

int main() {
	unsigned long long n,k,one=1;
	int t; cin>>t;
	while(t--) {
		cin>>n>>k;
		if(n==2&&k==3)
			cout<<"NO"<<endl;
		else if(n>30||3*k<=(one<<n*2)-1)
			cout<<"YES "<<GetAns(n,k)<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
