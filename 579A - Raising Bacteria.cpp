#include<bits/stdc++.h>
using namespace std;
	int main(){
		int x;
		cin>>x;
		long long int ans =0;
		while(x){
			x = x &(x-1);
			ans++;
		}
		cout<<ans;
	return 0;
}