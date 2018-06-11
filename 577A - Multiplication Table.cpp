#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	int x;
	cin>>x;

	int ans=0;
	for(int i=0;i<n;++i){
		if(x%(i+1)==0&&(x/(i+1))<=n) ans++;
	}
	cout<<ans;
	return 0;
}