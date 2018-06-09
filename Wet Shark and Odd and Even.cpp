#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){

	int t;
	cin>>t;
	vector<ll> v;
	ll sum=0;
	for(int i=0;i<t;++i){
		ll inp;
		cin>>inp;
		v.push_back(inp);
	}
	sort(v.begin(), v.end());

	sum = accumulate(v.begin(),v.end(),sum);

	if(sum%2!=0){
		for(ll i=0;i<v.size();++i){
			if((sum-v[i])%2==0){
				sum-=v[i];
				break;
			}
		}
	}
	cout<<sum;

	return 0;
}